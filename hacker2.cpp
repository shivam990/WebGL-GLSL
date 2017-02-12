#include<iostream>
using namespace std;
int main()
{
	 int n,i,j,k,y;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		y=0;
		for(j=1;j<a[i];j++){
			k=j^a[i];
			if(k>a[i])
			y++;	
		}
		a[i]=y;
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}

