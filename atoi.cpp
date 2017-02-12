#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>j;
		int a[j];
		for(k=0;k<j;k++){
			cin>>a[k];
		}
		int s=0;
		for(k=0;k<j;k++){
			a[k]=s+k*a[k];
		}
	}
}
