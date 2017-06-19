#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/*
Aim of this piece of code is to create a new directory
*/

int main(int argc, char* argv[])
{

	struct stat st = {0};

	if(argc<2)
		printf("Argument list is incomplete!");

	if (stat(argv[1], &st) == -1) 
	{
    		mkdir(argv[1], 0777);
		printf("Directory %s has been successfully creates!\n",argv[1]);
	}

	else
	{
		printf("Error creating directory %s!\n",argv[1]);
	}

}
