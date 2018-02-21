//Program to Append some Data at the End of a File
#include<stdio.h>

void main()
{
	FILE *f1;
	char fname[80],contents[80];
	printf("Enter Filename: ");
	fgets(fname,80,stdin);
	f1=fopen(fname,"a");
	//fgets("%s",fname);
	printf("\nEnter Contents to Append to file:-\n");
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
