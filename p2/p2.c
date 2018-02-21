//Program to Count the Number of Characters(including Whitespaces) in a File
#include<stdio.h>

void main()
{
	FILE *f2;
	f2=fopen("abc.txt","r");
	int count=0;
	if(f2==NULL)
	{
		printf("\nFile Not Found!\n");	
		return;
	}
	
	while(fgetc(f2)!=EOF)
		count++;
		

	printf("\nNo. of Characters(with spaces)= %d\n",count-1);
	fclose(f2);
}
