#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

/*
Aim of this piece of code is to remove a file
*/

int main (int argc, char* argv[])
{

	if(argc<2)
		printf("Argument list is incomplete!");
	else	
	{
		if(remove(argv[1]) == 0)	
			printf("File %s has been removed from a directory\n", argv[1]);	
		else	
			printf("Error deleting file %s\n", argv[1]);
	
	}
}
