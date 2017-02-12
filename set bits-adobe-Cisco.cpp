#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,temp,t;
	cin>>n;
	int b[n],a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		temp=a[i];
		int count=0;
		while(temp!=0)
		{
			t=temp%2;
			if(t==1){
				count++;
			}
			temp=temp/2;
		}
		b[i]=count;
	}
	for(i=0;i<n;i++){
		cout<<b[i]<<"\n";
	}
	return 0;
}
