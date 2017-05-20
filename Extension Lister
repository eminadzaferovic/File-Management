#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

/*
Aim of this piece of code is to list only the files with the given extension in a given directory
*/

int main (int argc, char* argv[])
{

	char extension[10];
	extension[0]='.';
	extension[1]='\0';
	strcat(extension, argv[2]);

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
				if ((strstr(dr->d_name, extension))==NULL)
					continue;	
				if (strcmp(dr->d_name, ".") && 
strcmp(dr->d_name, "..")) 	
					printf("%s\n", dr->d_name);	
			}
		closedir(dir);
		}
	}
}
