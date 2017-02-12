#include<stdio.h>
int main()
{
	int n,m=1,i,j,k,s,max,z;
	scanf("%d",&n);
	int b[n];
	for(i=0;i<n;i++){
		scanf("%d",&j);
		int a[j];
		for(k=0;k<j;k++){
			scanf("%d",&a[k]);
		}
		for(s=0;s<j;s++){
		max=a[0];
		for(z=0;z<s;z++){
			if(a[z]>max)
			max=a[z];
		}
			if(a[s]>max){
				m++;
		}
	}
		b[i]=m;
		m=1;
	}
	for(i=0;i<n;i++){
	printf("%d\n",b[i]);
}
	return 0;
}
