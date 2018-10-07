#include<stdio.h>
#define N 1008
void main()
{
	int sum=1;
	for(int i=1;i<N+1;i++)
	{
		sum=(sum%25)*(i%25);
	}
	printf("%d\n",sum%25);

}
