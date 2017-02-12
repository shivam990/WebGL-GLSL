#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l;
	cin>>n;
	int b[n];
	for(i=0;i<n;i++){
		int flag=0;
		cin>>j;
		int a[j];
		for(k=0;k<j;k++){
			cin>>a[k];
		}
		cin>>l;
		for(k=0;k<j;k++){
			if(a[k]==l){
				flag=1;
				b[i]=k;
			}
		}
		if(flag==0){
			b[i]=-1;
		}
	}
	for(i=0;i<n;i++){
		cout<<b[i]<<"\n";
	}
	return 0;
}
