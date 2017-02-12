#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
    	cin>>a[i];
	}
    int max=a[0],s=0;
	for(i=0;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]==max)
		s++;
	}
	cout<<s;	
  return 0;
}
