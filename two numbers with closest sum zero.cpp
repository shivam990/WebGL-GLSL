#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l,m,t,h,p=0,min;
	cin>>n;
	int c[2*n];
	for(i=0;i<n;i++){
		cin>>j;
		int a[j],b[j*j-j];
		for(k=0;k<j;k++){
			cin>>a[k];
		}
		m=0;
		int flag=0;
		for(k=0;k<j;k++){
			for(l=0;l<j;l++){
				if(l!=k){
					if((a[k]+a[l])<0)
				b[m]=-(a[k]+a[l]);	
				if((a[k]+a[l])>=0)
				b[m]=a[k]+a[l];
				m++;
				}
			}
		}
		min=b[0];
		for(k=0;k<m;k++){
			if(b[k]<min)
			min=b[k];
		}
		//cout<<min<<"\n";
		for(k=0;k<j;k++){
			for(l=0;l<j;l++){
				if(l!=k){
					t=-(a[k]+a[l]);
					h=(a[k]+a[l]);
					//cout<<h<<"\n";
					if(t==min||h==min){
					c[p]=a[k];
					//cout<<c[p];
					p++;
					c[p]=a[l];
					p++;
					flag=1;
					break;
				}
				}
			}
			if(flag==1)
			break;
		}
	}
	//cout<<p;
	int f=0,y=0;
	for(i=0;i<p;i++){
		if((c[i]<c[i+1])&&y!=1){
			f=1;
			cout<<c[i]<<" "<<c[i+1]<<"\n";
		i=i+1;
		//f=0;
		}
		if((c[i]>c[i+1])&&f!=1){
			y=1;
			cout<<c[i+1]<<" "<<c[i]<<"\n";
		i=i+1;
		//y=0
		}
		f=0;y=0;
	}
	return 0;
}
