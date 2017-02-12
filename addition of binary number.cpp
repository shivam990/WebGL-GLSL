#include <stdio.h>
#include<math.h> 
int main()
{
    int a[100];
    long binary1, binary2;
    int i = 0, remainder = 0, sum[20];
 
    printf("Enter the first binary number: ");
    scanf("%ld", &binary1);
    printf("Enter the second binary number: ");
    scanf("%ld", &binary2);
    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    printf("Sum of two binary numbers: ");
    int j=0;
	while (i >= 0){
    	a[j]=sum[i];
        //printf("%d\n", sum[i--]);
	i--;
	j++;
	}
	int la=j-1;
	int fi=0;
	while(fi<la)
	{
		int temp=a[fi];
		a[fi]=a[la];
		a[la]=temp;
		fi++;
		la--;
	}
	int p=-1,s=0;
	for(int l=0;l<j;l++)
	{
		p++;
		if(a[l]==1)
		{
			s=s+pow(2,p);
		}
	}
	printf("%d",s);
	return 0;
}

