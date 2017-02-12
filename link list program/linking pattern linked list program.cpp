

#include<stdio.h>
#include<malloc.h>
struct node
{
	int digit;
	int *left,*right,*up,*down;
}*newnode;
int i=1,a[20];
void creat()
{
	do{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter element: ");
	scanf("%d",&newnode->digit);
	a[i]=newnode->digit;
	i++;
    }while(i<=16);
}
main()
{
	int n,l,j=1;
	creat();
	while(j<=16){
	printf("\n\nENTER NUMBER: ");
	scanf("%d",&n);
	for(i=0;i<16;i++){
	if(n==a[i]){
	l=i;
	break;	}
}
	
		if(l==0)
		{
		newnode->left=NULL;
		newnode->up=NULL;
		newnode->right=&a[1];
		newnode->down=&a[4];	
	printf("Neighbours are %d\t%d",*newnode->right,*newnode->down);	
    }
    if(l==1)
    {
    	newnode->left=NULL;
		newnode->up=NULL;
    	newnode->right=&a[2];
    	newnode->down=&a[5];
    	printf("Neighbours are %d\t%d",*newnode->right,*newnode->down);
	}
    if(l==2)
    {
    	newnode->left=NULL;
		newnode->up=NULL;
    	newnode->right=&a[3];
    	newnode->down=NULL;
    	printf("Neighbours are %d",*newnode->right);
	}
	if(l==3)
    {
    	newnode->left=NULL;
		newnode->up=NULL;
    	newnode->right=NULL;
    	newnode->down=&a[7];
    	printf("Neighbour is %d",*newnode->right);
	}
	if(l==4)
    {
    	newnode->left=NULL;
		newnode->up=NULL;
    	newnode->right=&a[5];
    	newnode->down=&a[8];
    	printf("Neighbour is %d\t%d",*newnode->down,*newnode->right);
	}
    if(l==5)
    {
    	newnode->left=&a[5];
		newnode->up=NULL;
    	newnode->right=NULL;
    	newnode->down=NULL;
    	printf("Neighbour is %d",*newnode->left);
	}
	if(l==6)
    {
    	newnode->left=&a[5];
		newnode->up=&a[2];
    	newnode->right=NULL;
    	newnode->down=NULL;
    	printf("Neighbours are %d\t%d",*newnode->left,*newnode->up);
	}
	if(l==7)
    {
    	newnode->left=&a[6];
		newnode->up=NULL;
    	newnode->right=NULL;
    	newnode->down=&a[11];
    	printf("neighbours are %d\t%d",*newnode->left,*newnode->down);
	}
	if(l==8)
    {
    	newnode->left=NULL;
		newnode->up=NULL;
    	newnode->right=&a[9];
    	newnode->down=NULL;
    	printf("Neighbour is %d",*newnode->right);
	}
	if(l==9)
    {
    	newnode->left=NULL;
		newnode->up=&a[5];
    	newnode->right=&a[10];
    	newnode->down=&a[13];
    	printf("Neighbour is %d\t%d",*newnode->up,*newnode->down,*newnode->right);
	}
	if(l==10)
    {
    	newnode->left=NULL;
		newnode->up=NULL;
    	newnode->right=&a[12];
    	newnode->down=&a[15];
    	printf("Neighbours are %d\t%d",*newnode->right,*newnode->down);
	}
	if(l==11)
    {
    	newnode->left=NULL;
		newnode->up=NULL;
    	newnode->right=NULL;
    	newnode->down=NULL;
    	printf("no Neighbour");
	}
	if(l==12)
    {
    	newnode->left=NULL;
		newnode->up=NULL;
    	newnode->right=NULL;
    	newnode->down=NULL;
    	printf("Neighbour is EMPTY");
	}
	if(l==13)
    {
    	newnode->left=NULL;
		newnode->up=NULL;
    	newnode->right=NULL;
    	newnode->down=NULL;
    	printf("Neighbours are EMTPTY");
	}
	if(l==14)
    {
    	newnode->left=&a[13];
		newnode->up=NULL;
    	newnode->right=NULL;
    	newnode->down=NULL;
    	printf("neighbour is %d",*newnode->left);
	}
	if(l==15)
    {
    	newnode->left=NULL;
		newnode->up=&a[11];
    	newnode->right=NULL;
    	newnode->down=NULL;
    	printf("Neighbour is %d",*newnode->up);
	}
	j++;
	}    
}
