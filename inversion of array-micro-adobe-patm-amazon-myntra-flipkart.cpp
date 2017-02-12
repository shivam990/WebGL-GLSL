#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,p;
	cin>>n;
	int b[n];
	for(i=0;i<n;i++){
		int count=0;
		cin>>j;
		int a[j];
		for(k=0;k<j;k++){
			cin>>a[k];
		}
		for(k=0;k<j;k++){
			for(p=k+1;p<j;p++){
				if(a[k]>a[p]){
					count++;
				}
			}
		}
		b[i]=count;
	}
	for(i=0;i<n;i++){
		cout<<b[i]<<"\n";
	}
	return 0;
}
