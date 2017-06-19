#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

/*
Aim of this piece of code is to create a file if it does not exist already
*/

int main (int argc, char* argv[])
{

	if(argc<2)
		printf("Argument list is incomplete!");
	else	
	{
		FILE *fp;
		fp=fopen(argv[1],"rb+");

		if(fp==NULL)
		{
			fp=fopen(argv[1],"wb");
		}
	}
}
