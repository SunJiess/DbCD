#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mysql/mysql.h>
#include "cgic.h"

char * headname = "head.html";
char * footname = "footer.html";

int cgiMain()
{
  FILE * fd;
  char stuId[16] = "\0";
	//char password[16] = "\0";
  int status = 0;

  fprintf(cgiOut, "Content-type:text/html;charset=utf-8\n\n");

  char ch;
	if(!(fd = fopen(headname, "r"))){
		fprintf(cgiOut, "Cannot open file, %s\n", headname);
		return -1;
	}
	ch = fgetc(fd);

	while(ch != EOF){
		fprintf(cgiOut, "%c", ch);
		ch = fgetc(fd);
	}
	fclose(fd);

  status = cgiFormString("stuId", stuId, 16);
	if (status != cgiFormSuccess)
	{
		fprintf(cgiOut, "get stuId error!\n");
		return 1;
	}

	// status = cgiFormString("password",  password, 16);
	// if (status != cgiFormSuccess)
	// {
	// 	fprintf(cgiOut, "get password error!\n");
	// 	return 1;
	// }

  int ret;
	char sql[128] = "\0";
	MYSQL *db;

	//初始化
	db = mysql_init(NULL);
	if (db == NULL)
	{
		fprintf(cgiOut,"mysql_init fail:%s\n", mysql_error(db));
		return -1;
	}

	//连接数据库
	db = mysql_real_connect(db, "127.0.0.1", "root", "123456", "stu",  3306, NULL, 0);
	if (db == NULL)
	{
		fprintf(cgiOut,"mysql_real_connect fail:%s\n", mysql_error(db));
		mysql_close(db);
		return -1;
	}

  sprintf(sql, "select * from information where stuId =%d", atoi(stuId));

  if ((ret = mysql_real_query(db, sql, strlen(sql) + 1)) != 0)
	{
		fprintf(cgiOut,"mysql_real_query fail:%s\n", mysql_error(db));
		mysql_close(db);
		return -1;
	}
  MYSQL_RES *res;
  res = mysql_store_result(db);
  int num= (int)res->row_count;

  if (num)
	{
    printf("<html>\n");
    printf("<head><title>login success</title></head>\n");
    printf("<body><br>\n");
    printf("<h2>登陆成功！！\n");
    printf("<hr><p>\n");
    printf("<a href=\"/student.html\">学生信息管理系统</a>\n");
    printf("</body>\n");
    printf("</html>\n");
	}
	else
  {
		 fprintf(cgiOut, "<div class=\"container\"> <h1 class=\"text-center\">您输入的账号不正确，请重新输入！</h1>");
  }
  mysql_close(db);
	return 0;
}
