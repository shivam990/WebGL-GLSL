#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	int n,i,j,k,l,t,s;
	cin>>n;
    char a[n][100];
    int b[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		l=strlen(a[i]);
		k=0,s=0;
		for(j=l-1;j>=0;j--){
			if(a[i][j]=='1'){
			t=pow(2,k);
			s=s+t;	
			}
			k++;
		}
	//	cout<<s;
		if(s%3==0)
		b[i]=1;
		else
		b[i]=0;
	}
	for(i=0;i<n;i++){
		cout<<b[i]<<"\n";
	}
	return 0;
}
