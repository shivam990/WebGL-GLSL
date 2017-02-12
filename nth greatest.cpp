#include<stdio.h>
void f1();
main()
{
	int a[]={2,4,1,6,3};
	int n,i,j,max,p=1;
	max=a[0];
	for(i=0;i<5;i++){
	if(a[i]>max){
	max=a[i];
	p++;
  f1();
    for(i=p;i<5;i++){
    	a[i]=a[i+1];
	}
	for(i=0;i<5;i++){
    	printf("%d\t",a[i]);
		}
}
}
}

