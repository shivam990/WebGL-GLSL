#include<iostream>
using namespace std;
int main()
{
	int n,m;
	char c;
	FILE *fp;
	fp=fopen("jj.txt","r");
   fscanf(fp,"%d\t%d",&n,&m);
   cout<<n<<"\n"<<m<<"\n"<<n*m;
	fclose(fp);
}
