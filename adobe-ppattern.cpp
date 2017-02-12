#include<iostream>
using namespace std;
int main()
{
	int n,l,i,j,k,a[100];
	cin>>n;
	for(k=0;k<n;k++){
		cin>>a[k];	
		}
		for(k=0;k<n;k++){
	for(i=1;i<=a[k];i++){
		for(j=a[k]+1-i;j>0;j--){
			printf("*");
		}
		for(l=0;l<i;l++){
		printf(" ");
	}
	}
	printf("\n");
}
	return 0;
}
