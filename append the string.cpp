#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,m,i,j,k,l,flag;
	string b[30];
	char a[400]; 
	cin>>n;
	for(m=0;m<n;m++){
		scanf("%s",a);
		if(a[0]>=65&&a[0]<=90){
			flag=1;
		}
		else{
			flag=0;
		}
		for(i=0;a[i]!='\0';i++){
		if(a[i]>=65&&a[i]<=90){
			a[i]=a[i]+32;
			k=i;
			l=strlen(a);
			a[l]='r';
			a[l+1]='\0';
			while(l!=i){
				a[l]=a[l-1];
				l--;
			}
			a[k]=' ';
		}
    }
    if(flag==1){
    	
	for(i=0;a[i]!='\0';i++){
		a[i]=a[i+1];
	}
	}
	b[m]=a;
	}
	for(m=0;m<n;m++){
		cout<<b[m]<<"\n";
	}
	return 0;
}
