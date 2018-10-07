#include<stdio.h>
int f(int n)
{
	int m=1;
	for(int i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			n=n/i;
			m=i;
		}
	}
	return m;

}
void main()
{
	int m=0;
	m=f(865751897);
	printf("%d\n",m	);

}
