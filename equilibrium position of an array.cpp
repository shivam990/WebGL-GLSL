#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	int b[n];
	for(i=0;i<n;i++){
		int c,m;
		cin>>j;
		int a[j];
		for(k=0;k<j;k++){
			cin>>a[k];
		}
		for(k=0;k<j;k++){
			int s=0,p=0;
			for(c=0;c<k;c++){
				s=s+a[c];
			}
			for(m=k+1;m<j;m++){
				p=p+a[m];
			}
			if(s==p){
			b[i]=k+1;
			break;	
			}
		}
		
	}
	for(i=0;i<n;i++){
		cout<<b[i]<<"\n";
	}
	return 0;
}
