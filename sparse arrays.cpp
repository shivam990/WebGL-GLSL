#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,z,i,j,k,l,t;
	cin>>n;
	char a[n][20];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>j;
	int c[j];
	char b[j][20];
	for(k=0;k<j;k++){
		cin>>b[k];
	}
	for(k=0;k<j;k++){
         z=0;
		for(i=0;i<n;i++){
			t=strcmp(b[k],a[i]);
			if(t==0){
				z++;
			}
		}
		c[k]=z;
	}
	for(k=0;k<j;k++){
		cout<<c[k]<<"\n";
	}
	return 0;
}
