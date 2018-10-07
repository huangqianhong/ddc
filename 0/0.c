#include<stdio.h>
#define N 5
void sort(int a[])
{
	int temp=0;
	for(int i=0;i<N;i++)                 //第一个for循环代表趟数
	{
		for(int j=0;j<N-i;j++)               //第二个for循环代表两两之间比较的次数
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;

			}
		}
	}

}
void main()
{
	int a[N]={0};
	int i;
	while(1)
	{
      for(i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a);
	   for (i=0;i<N;i++)
		{
			printf("%d\t",a[i]);
		}
	}
}
