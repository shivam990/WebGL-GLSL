#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,j,k,l,a,b;
	cin>>n;
	int z[n];
	for(i=0;i<n;i++){
		int count=0;
		long double temp,t;
		cin>>a>>b>>k;
		temp=pow(a,b);
		cout<<temp<<"\n";
		while(count!=k){
			 t=temp%10.0;
			count++;
			temp=temp/10;
		}
		z[i]=t;
	}
	for(i=0;i<n;i++){
		cout<<z[i]<<"\n";
	}
	return 0;
}
