#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,j,k,temp,t;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		int count=0;
		temp=a[i];
		while(temp!=0){
			t=temp%10;
			count++;
			if(t==0){
				a[i]=a[i]+5*pow(10,count-1);
			}
			temp=temp/10;
		}
		}
		for(i=0;i<n;i++){
			cout<<a[i]<<"\n";
		}
		return 0;
}
