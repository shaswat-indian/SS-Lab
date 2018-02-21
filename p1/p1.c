//Program to Write to a file, Read its contents and Display it
#include<stdio.h>

void main()
{
	FILE *f1;
	char fname[80],contents[80];
	printf("Enter Filename: ");
	fgets(fname,80,stdin);
	f1=fopen(fname,"w");
	//fgets("%s",fname);
	printf("\nEnter Contents to write to file:-\n");
	while(fgets(contents,80,stdin))
		fputs(contents,f1);
	
	//fputc('\n',f1);
	fclose(f1);
	
	printf("\n\nFile Contents are:-\n");
	f1=fopen(fname,"r");
	while(fgets(contents,80,f1))
		fputs(contents,stdout);

	fclose(f1);

}
