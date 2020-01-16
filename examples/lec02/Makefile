# This sample Makefile allows you to make an application
#   whose source is exactly one .c file or one .cc file under Solaris.
#
# To use this Makefile, you type:
#
#        make xxxx
#                  
# where
#       xxxx.cc is the name of the c++-file you wish to compile 
#  or 
#       xxxx.c is the name of the c-file you wish to compile 
#       
# A binary named xxxx will be produced.
#
# Libraries are assumed to be in the default search paths as are any
# required include files
#
# Modified by Prof. Chelberg to clean up as well
# Modified by Prof. Chelberg to clean up emacs temp files as well
# last-modified: Mon Apr  6 11:25:40 2015
#

# Next line tells Make to use the gnu compiler
CC = g++

# Next line says what options to use to compile programs
OPTIONS=-Wall

OBJECTS = $(patsubst %.cc,%,$(wildcard *.cc))

all: $(OBJECTS)

# pattern to allow compilation of many c++ programs
.cc:
	$(CC)  $@.cc $(OPTIONS) -o $@

clean:
	rm -f $(OBJECTS) *~
