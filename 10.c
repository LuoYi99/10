/*
题目：
编写一个程序，输入一个字符串（长度不超过20），然后把这个字符串内的每一个字符进行大小写变换，即将大写字母变成小写，小写字母变成大写，然后把这个新的字符串输出。
*/
/*
思路：
遍历所有的字符，之后实现大小写转换
*/
#include<stdio.h>
#include<string.h>
void main()
{
	char str[21];
	int i;
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a'&&str[i]<='z')str[i]-=32;
		else if(str[i]>='A'&&str[i]<='Z')str[i]+=32;
	}
	puts(str);
	return;
}