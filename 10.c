/*
��Ŀ��
��дһ����������һ���ַ��������Ȳ�����20����Ȼ�������ַ����ڵ�ÿһ���ַ����д�Сд�任��������д��ĸ���Сд��Сд��ĸ��ɴ�д��Ȼ�������µ��ַ��������
*/
/*
˼·��
�������е��ַ���֮��ʵ�ִ�Сдת��
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