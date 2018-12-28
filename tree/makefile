CC=gcc 
WARNINGCC=gcc -O -Wall
DEBUGCC=gcc -g 
SUBDIRS=$(shell ls -l | grep ^d | awk '{if($$9 != "debug") print $$9}')
ROOT_DIR=$(shell pwd)
BIN=base
OBJS_DIR=debug/obj
BIN_DIR=debug/bin
CUR_SOURCE=${wildcard *.c}
CUR_OBJS=${patsubst %.c, %.o, $(CUR_SOURCE)}
export CC BIN OBJS_DIR BIN_DIR ROOT_DIR
all:$(SUBDIRS) $(CUR_OBJS) DEBUG
$(SUBDIRS):ECHO
	make -C $@
DEBUG:ECHO
	make -C debug
ECHO:
	@echo $(SUBDIRS)
$(CUR_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_DIR)/$(OBJS_DIR)/$@
CLEAN:
	@rm $(OBJS_DIR)/*.o
	@rm -rf $(BIN_DIR)/*
