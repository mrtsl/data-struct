CC = gcc 
CCDEBUG = gcc -g
PRO = base
OBJ = main.o operation.o init.o samelistinit.o addnode.o iscircle.o del_node.o center.o link.o
DEP = main.h init.h operation.h addnode.h iscircle.h del_node.h center.h link.h

$(PRO):$(OBJ)
	$(CC) -o  $(PRO) $(OBJ)
%.o:%.c $(DEP)
	$(CC) -c  $< -o $@
clean:
	rm -rf *.o
	rm -rf base
ccore:
	rm -rf core
count:
	find . -name "*.c" |xargs cat|grep -v ^$|wc -l
	find . -name "*.h" |xargs cat|grep -v ^$|wc -l
	