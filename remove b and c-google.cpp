#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,t;
	cin>>n;
	char a[200][200];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;a[i][j]!='\0';j++){
			if(a[i][j]=='b'){
				 t=j;
				while(a[i][j]!='\0'){
					a[i][j]=a[i][j+1];
	                 j++;
				}
			}
			j=t;
			l=strlen(a[i]);
			if(a[i][j]=='a'&&a[i][j+1]='c'){
				while(j!=l-2){
					a[i][j]=a[i][j+2];
	                 j++;
				}
			}
			j=t;
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i];
	}
}
