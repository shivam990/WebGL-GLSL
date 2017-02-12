#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l,m=0;
	cin>>n;
	int b[2*n];
	for(i=0;i<n;i++){
		cin>>j;
		int a[2*j+2];
		for(k=0;k<2*j+2;k++){
			cin>>a[k];
		}
		for(k=0;k<2*j+2;k++){
			int flag=0;
		for(l=0;l<2*j+2;l++){
			if(k!=l){
				if(a[k]==a[l]){
				flag=1;
				break;
				}
			}
		}
		if(flag!=1){
			b[m]=a[k];
			m++;
		}
		}
	}
	int t;
	//cout<<"\n";
	for(i=0;i<2*n;i++){
	t=i+1;
	if(b[i]<b[t]){
			cout<<b[i]<<" "<<b[t];
	}
    if(b[i]>b[t]){
			cout<<b[t]<<" "<<b[i];
	}
		cout<<"\n";
	i=i+1;
	}
	return 0;
}
