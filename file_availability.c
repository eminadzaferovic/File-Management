#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <stdbool.h>

/*
Aim of this piece of code is to check whether a file with a given name exists in a given directory
*/

bool flag=false;

int main (int argc, char* argv[])
{

	DIR *dir;
	struct dirent *dr;

	if(argc<3)
		printf("Argument list is incomplete!");
	else
	{
		if ((dir=opendir(argv[1])) != NULL) 
		{		
			while ((dr=readdir(dir)) != NULL) 
			{	
				if (strstr(dr->d_name, argv[2])!=0)
				flag=true;	
			}

		if(flag==true)
			printf("File is located in a directory");
		else
			printf("File is not located in a directory");

		closedir(dir);
		}
	}
}
