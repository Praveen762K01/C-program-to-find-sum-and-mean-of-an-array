#include <stdio.h>
int main()
{
	int i,n,sum,mean,arr[100];
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		printf("Enter the value for arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("The elements of array are\n");
	for (i=0; i<n; i++)
	{
		printf("%d\n",arr[i]);
	}
	for (i=0; i<n; i++)
	{
		sum = sum+arr[i];
	}
	mean = (float)sum/n;
	printf("SUM = %d\n",sum);
	printf("MEAN = %u",mean);
	return 0;
}
