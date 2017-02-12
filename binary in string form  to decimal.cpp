#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,num;
	cin>>n;
	int a[8];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		int count=-1,t,s=0,p=0;
		while(a[i]!=0){
			int flag=0;
			t=a[i]%10;
			if(t==1){
				flag=1;
				count++;
				p=pow(2,count);
				s=s+p;
			}
			if(flag==0){
				count++;
			}
			a[i]=a[i]/10;
		}
		if(s%3==0){
			cout<<"1\n";
		}
		if(s%3!=0){
			cout<<"0\n";
		}
	}
	return 0;
}
