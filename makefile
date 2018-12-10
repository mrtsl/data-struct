CC = gcc
CCDEBUG = gcc -g
PRO = base
OBJ = main.o operation.o init.o samelistinit.o addnode.o iscircle.o
DEP = main.h init.h operation.h addnode.h iscircle.h

$(PRO):$(OBJ)
	$(CC) -o  $(PRO) $(OBJ)
%.o:%.c $(DEP)
	$(CC) -c  $< -o $@
clean:
	rm -rf *.o
	rm -rf base
ccore:
	rm -rf core