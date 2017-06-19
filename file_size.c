#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>

/*
Aim of the program is to print the size of a particular file
*/

int main(int argc, char **argv)
{
	struct stat file_st;

	if (argc<2)
		printf("Argument list is incomplete!");

	else
	{
		if(stat(argv[1],&file_st) < 0)    
        		return 1;

		printf("File: %s\n", argv[1]);
    		printf("File Size: \t\t%ld bytes\n",file_st.st_size);
		
			
	}
}
