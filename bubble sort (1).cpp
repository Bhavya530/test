#include<stdio.h>
int bubblesort(int a[],int n)
{
	int i,j,temp,flag;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
}
int printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main()
{
	int a[100],n,i;
	printf("enter the size :\n");
	scanf("%d",&n);
	printf("enter the array elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("original array :\n");
	printarray(a,n);
	bubblesort(a,n);
	printf("sorted array :\n");
	printarray(a,n);
	return 0;
}
