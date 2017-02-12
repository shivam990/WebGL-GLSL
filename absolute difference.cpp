#include<iostream>
using namespace std;
int main()
{
	int n,i,j,z,t;
	cin>>n;
	int a[n],b[n*n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	z=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			t=a[i]-a[j];
			if(t<0){
				t=-t;
			}
			b[z]=t;
			z++;
		}
	}
	int min=b[0];
	for(i=0;i<z;i++){
	    if(b[i]<min)
		min=b[i];	
	}
	cout<<min;
	return 0;
}
