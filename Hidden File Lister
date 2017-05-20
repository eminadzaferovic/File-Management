#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

/*
Aim of this piece of code is to list hidden files inside of a given directory
*/

int hidden(const char* name);

int main (int argc, char* argv[])
{
	DIR *dir;
	struct dirent *dr;

	if(argc<2)
		printf("Argument list is incomplete!");
	else
	{
		if ((dir=opendir(argv[1])) != NULL) 
		{		
			while ((dr=readdir(dir)) != NULL) 
			{	if(hidden(dr->d_name))
					printf("%s\n", dr->d_name);	
			}
		closedir(dir);
		}
	}
}

int hidden (const char* name) 
{
	return name[0] == '.' && strcmp(name, ".") && strcmp(name, "..");
}
