CC := gcc
CFLAGS := -Wall -O3
Libs = -lpthread -lsqlite3
Target := addr_list
Source := $(wildcard src/*.c)
Objs := $(patsubst %.c,%.o,$(Source))
Modules += main func_package main_menu insert create display search delete modify reverse sqlite
AllObjs := $(addsuffix /src/*.o,$(Modules))
