#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <ctype.h>

/*
Aim of this piece of code is to list the files in alphabetical order in a directory 
*/


int main (int argc, char* argv[])
{

	DIR *dir;
	struct dirent *dr;
	
	int count=0;

	char name[256][256];
	char temp[256];

	int i,j;

	if(argc < 2)
		printf("Argument list is incomplete!");
	else
	{
		if ((dir=opendir(argv[1])) != NULL) 
		{		
			while ((dr=readdir(dir)) != NULL) 
			{		
				strcpy(name[count],dr->d_name);
				count++;
			}
	
		closedir(dir);	
	}
