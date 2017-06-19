#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <stdbool.h>

/*
Aim of this piece of code is to list files containing a particular string
*/

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
				if ((strstr(dr->d_name, argv[2]))==NULL)
					continue;		
				printf("%s\n", dr->d_name);	
			}
		closedir(dir);
		}
	}
}
