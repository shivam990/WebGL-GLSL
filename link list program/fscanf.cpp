#include<stdio.h>
main()
{
	FILE *fp;
	int n,v,e;
	char c,d,f;
	fp=fopen("input.txt","r");
	fscanf(fp,"%c%d%d%c%c%d",&c,&n,&v,&d,&f,&e);
	printf("%c\t%d\t%d\t%c\t%d",c,n,v,f,e);
	fclose(fp);
}
