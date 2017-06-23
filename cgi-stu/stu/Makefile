CC=gcc
AFLAGS=-Wall -g
LDFLAGS= -lmysqlclient
OBJS= add.cgi del.cgi mod.cgi sel.cgi addStudentScore.cgi selectStudentScore.cgi updateStudentScore.cgi delectStudentScore.cgi studentLogin.cgi teacherLogin.cgi
all:$(OBJS)

$(OBJS):%.cgi:%.c
	$(CC) $(AFLAGS) $< cgic.c -o $@ $(LDFLAGS)

.PHONY:clean
clean:
	rm ./*.cgi

install:
	cp *.cgi /usr/lib/cgi-bin/sx/
	cp head.html footer.html student.html teacher.html /usr/lib/cgi-bin/sx/
