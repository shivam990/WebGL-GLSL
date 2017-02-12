#include<iostream>
using namespace std;
int main()
{
	int s1,n,i,n1,j,k,p=0,q=1,flag=0;
	cin>>n;
	int b[2*n];
	for(i=0;i<n;i++){
		cin>>n1>>s1;
		int a[n1];
		for(j=0;j<n1;j++){
			cin>>a[j];
		}
		for(k=0;k<n1;k++){
		int s=0;
		for(j=k;j<n1;j++){
			s=s+a[j];
			if(s==s1){
				flag=1;
				b[p]=k+1;b[q]=j+1;
				p=p+2;q=q+2;
				break;
			}
		}
		if(flag==1)
		break;
	}
	}
  if(flag==1){
	for(i=0;i<2*n;i++){
		cout<<b[i];
		i++;
		cout<<" "<<b[i]<<"\n";
	}
}
if(flag==0){
	cout<<"-1\n";
}
	return 0;
}
