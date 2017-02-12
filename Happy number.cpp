#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l,s=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>j;
		while(j!=1){
			temp=j;
			while(temp!=0){
				t=temp%10;
				s=s+pow(t,2);
				temp=temp/10;
			}
			j=s;
		}
	}
}

