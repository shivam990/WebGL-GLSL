#include<stdio.h>
#include<string.h>
main()
{
	char a[10][2000];
	int n,l,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		l=strlen(a[i]);
	    for(j=l-1;j>=0;j--){
	    	if(a[j]=='.'){
	    		strcpy(temp[i])
			}
		}
	}
}
