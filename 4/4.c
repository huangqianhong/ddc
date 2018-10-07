/*
4.实现SubString方法，给定一字符串，返回子串（给定参数为子串在原字符串的起始位置与结束为止）*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* substring(const char* c, int startpos, int endpos)
{
	char* s;
	int eff,j;
	s = (char *)malloc(sizeof(char));
	if (startpos > endpos)                   //初始位置大于结束位置
	{
		*s = ' ';
	}
	if (strlen(c) < (endpos - startpos))   //判断初始位置和结束的长度有没有大于字符串长度
	{
		eff = strlen(c) + startpos;
	}
	else
	{
		eff = endpos ;
	}
	for (int i = startpos - 1,j=0; i < eff+1; j++,i++)
	{
		s[j] = c[i];

	}
	return s;
}
void main()
{
	substring("I am student", 6, 12);
	char* d;
	d = substring("I am student", 6, 12);
	printf("%s", d);

	getchar();

}
