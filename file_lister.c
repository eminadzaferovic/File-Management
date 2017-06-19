#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

/*
Aim of this piece of code is to list the files in a directory which is given by the user.
*/

int main (int argc, char* argv[])
{

	DIR *dir;
	struct dirent *dr;

	if (argc<2)
		printf("Argument list is incomplete!");

	else
	{
		if ((dir=opendir(argv[1])) != NULL) 
		{		
			while ((dr=readdir(dir)) != NULL) 
			{		
				if (strcmp(dr->d_name, ".") && 
strcmp(dr->d_name, "..")) 
    					printf("%s\n", dr->d_name);
			}
		closedir(dir);
		}
	}
}
