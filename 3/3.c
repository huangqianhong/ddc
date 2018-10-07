/*
给定一个字符串，要求统计出字符串里面的数字个数，字母个数，空格个数，以及其他字符的个数
*/
#include<stdio.h>
void main()
{
	char c;
	int count1 = 0;               //数字个数
	int count2 = 0;               //字母个数
	int count3 = 0;               //空格个数
	int count4 = 0;               //其他字符的个数

	while ((c = getchar()) != '\n')
	{
		if ((c>='0')&&(c <= '9'))
		{
			count1++;
		}
		else if(c==' ')
		{
			count3++;
		}
		else if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z'))
		{
			count2++;
		}
		else
		{
			count4++;
		}
	}
	printf("数字个数:%d\n", count1);
	printf("字母个数:%d\n", count2);
	printf("空格个数:%d\n", count3);
	printf("其他字符个数:%d\n", count4);

	getchar();
}
