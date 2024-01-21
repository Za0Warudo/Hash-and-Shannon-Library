#!/bin/bash 

#+ Make the current dir a lib path 
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$PWD 
#+ Compile the hash static lib 
	gcc -c hash.c -o hash.o 
	ar rcs libhash.a hash.o 
[[ $? -ne 0 ]] && echo "ERROR: hash lib not create" >&2 && exit 1
#+ Compile the shannon dinamic lib 
	gcc -c -fPIC shannon.c -o shannon.o 
	gcc -o libshannon.so -shared shannon.o -lm
[[ $? -ne 0 ]] && echo "ERROR: shannon lib not create" >&2 && exit 2
#+ Compile test 
	gcc test.c -o test -L. -lhash -lshannon 
[[ $? -ne 0 ]] && echo "ERROR: test not create" >&2 && exit 3

#+ Generate doxygen 
	doxygen -g 

	sed -i "s/OPTIMIZE_OUTPUT_FOR_C  = NO/OPTIMIZE_OUTPUT_FOR_C  = YES/g" Doxyfile
	sed -i "s/GENERATE_TREEVIEW      = NO/GENERATE_TREEVIEW      = YES/g" Doxyfile
	sed -i "s/GENERATE_LATEX         = YES/GENERATE_LATEX         = NO/g" Doxyfile
	sed -i "s/INPUT                  =/INPUT                  = test.c hash.h shannon.h/g" Doxyfile
	sed -i "s/EXTRACT_ALL            = NO/EXTRACT_ALL            = YES/g" Doxyfile
	sed -i "s/PROJECT_LOGO           =/PROJECT_LOGO           = Tux-small.png/g" Doxyfile
	sed -i 's/PROJECT_NAME           = "My Project"/PROJECT_NAME           = "Hash and Shannon Library"/g' Doxyfile
#+ execute 
	doxygen Doxyfile

exit 0 