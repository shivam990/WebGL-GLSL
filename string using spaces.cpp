#include<iostream>
using namespace std;
int main()
{
	int i,j,k=0,l,flag=0,t;
	char a[50];
	cin>>a;
	for(i=0;a[i]!='\0';i++){
		if(flag==0||flag==1){
			if(a[i]>=65&&a[i]<=90){
				if(flag==0){
					a[i]=a[i]+32;
				}
				k++;
				flag++;
			}
		}
}
	puts(a);
}
