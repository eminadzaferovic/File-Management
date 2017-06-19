#include <stdio.h>
#include <stdlib.h>

/*
Aim of this piece of code is to rename an existing file
*/

int main (int argc, char* argv[])
{

	if(argc<3)
		printf("Argument list is incomplete!");
	else	
	{
		if(rename(argv[1], argv[2]) == 0)	
			printf("File %s has been rename to %s\n", argv[1], argv[2]);	
		else	
			fprintf("Error renaming file %s\n", argv[1]);
	
	}
}
