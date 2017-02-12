#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,a[100];
	cin>>n;
	for(k=0;k<n;k++){
		cin>>a[k];	
		}
		for(k=0;k<n;k++){
	for(i=1;i<=a[k];i++){
		for(j=2*a[k]-2*i+1;j>0;j--){
			printf("*");
		}
		printf(" ");
	}
	printf("\n");
}
	return 0;
}
