#include<stdio.h>
int main()
{
    int n,j,k,z=0,l,i,m,s=0,count=0,p,t,r,o;
	scanf("%d",&n);
	int b[n];
	for(i=0;i<n;i++){
		scanf("%d",&j);
		int a[j];
		for(k=0;k<j;k++){
		scanf("%d",&a[k]);
		}
		for(l=0;l<j;l++){
			for(m=0;m<j;m++){
				if(a[l]!=a[m]){
			s=a[l]+a[m];
		    if(s%3==0){
		    count++;
		    }
			}
		}
		}
		count=count/2;
		int flag=0;
			for(t=0;t<j;t++){
			for(r=0;r<j;r++){
				for(p=0;p<j;p++){
				if(a[t]!=a[r]&&a[r]!=a[p]&&a[p]!=a[t]){
			s=a[t]+a[r]+a[p];
		    if(s%3==0){
		    flag++;
		    }
			}
		}
		}
	}
	flag=flag/6;
	count=count+flag;
	b[i]=count;
	count=0;flag=0;
}
for(i=0;i<n;i++){
	printf("%d\n",b[i]);
}
return 0;
}

