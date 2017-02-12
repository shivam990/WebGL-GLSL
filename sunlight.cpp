#include<iostream>
using namespace std;
int main()

{
	int n,i,j,k,l;
	cin>>n;
	int b[n];
	for(i=0;i<n;i++){
		cin>>j;
		int a[j];
		for(k=0;k<j;k++){
			cin>>a[k];
		}
		int z=1;
		for(k=0;k<j;k++){
		     if(a[k]>a[0])
		     z++;
		}
		b[i]=z;
	}
	for(i=0;i<n;i++){
		cout<<b[i]<<"\n";
	}
	return 0;
}
