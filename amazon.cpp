#include<stdio.h>
int main()
{
	int n,i,j,k,l,m,s=0,b[25],t=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&j);
		int flag=0;
		int a[j];
		for(k=0;k<j;k++){
			scanf("%d",&a[k]);
		}
		for(k=0;k<j;k++){
			for(l=k+1;l<j;l++){
				for(m=l+1;m<j;m++){
					if(a[k]<a[l]&&a[l]<a[m]&&k<l&&l<m){
				                flag=1;
								++s;		
					}
				}
			}
		}
		if(flag==1){
			b[t]=s;
			t++;
			s=0;
		}
		if(flag!=1){
			b[t]=s;
			t++;
			s=0;
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",b[i]);
	}
	return 0;
}
