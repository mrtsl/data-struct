CC = gcc -g
PRO = base
OBJ = main.o operation.o init.o
DEP = main.h init.h operation.h

$(PRO):$(OBJ)
	$(CC) -o  $(PRO) $(OBJ)
%.o:%.c $(DEP)
	$(CC) -c  $< -o $@
clean:
	rm -rf *.o
ccore:
	rm -rf core