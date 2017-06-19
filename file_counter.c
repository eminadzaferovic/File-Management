#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

/*
Aim of this piece of code is to print the number of files in a given directory
*/

int hidden(const char* name);

int total_count=0;
int ext_count=0;
int hidden_count=0;

int main (int argc, char* argv[])
{

	char extension[10];
	extension[0]='.';
	extension[1]='\0';
	strcat(extension, argv[2]);

	DIR *dir;
	struct dirent *dr;

	if(argc<2)
		printf("Argument list is incomplet!");
	else
	{
		if ((dir=opendir(argv[1])) != NULL) 
		{			
			while ((dr=readdir(dir)) != NULL) 
			{		
				total_count++;

				if ((strstr(dr->d_name, extension))==NULL)
					continue;		
				ext_count++;

				if(hidden(dr->d_name))
					hidden_count++;
			}
		
	
		printf("Total number of files in a given directory is: %d\n",total_count);

		printf("Out of %d files, %d is/are hidden and %d is/are files with a given extension.\n",total_count,hidden_count,ext_count);

		closedir(dir);
		}
	}
}

int hidden (const char* name) 
{
	return name[0] == '.' && strcmp(name, ".") && 
strcmp(name, "..");
}
