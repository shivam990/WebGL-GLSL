#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		k=0;
		for(j=0;j<n;j++){
			if(a[i]==a[j])
			k++;
		}
		b[i]=k;
	}
	int max=b[0],t;
	for(i=0;i<n;i++){
	     if(b[i]>max){
	     	t=i;
		 }
	}
	cout<<a[t];
	return 0;
}
