#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,i,j,k,t,f,p,q,r,x,y,z,max;
	cin>>n;
	char b[n][10];
	int s1[n];
	for(i=0;i<n;i++){
		cin>>j;
		char s[j][10];
		int d[j];
		for(k=0;k<j;k++){
			cin>>s[k];
			cin>>p>>q>>r;
			t=(p+q+r)/3;
			d[k]=t;
		}
		max=d[0];
		for(k=0;k<j;k++){
			if(d[k]>max)
			max=d[k];
		}
		s1[i]=max;
		for(k=0;k<j;k++){
			if(d[k]==max){
				strcpy(b[i],s[k]);
			}
		}
	}
	for(i=0;i<n;i++){
    cout<<b[i]<<" "<<s1[i]<<"\n";
	}
	return 0;
}
