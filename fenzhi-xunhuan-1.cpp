#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* if���
*
* if(���ʽ)
* ��䣻
* ��ִ����� ��ʲô����ִ��
* 
*  int main()
{
	int age = 20;
	if(age>18)
		printf("����");
	return 0;
}

* if(���ʽ)
* ���1��
* else
* ���2��
* ��ִ�����1 ��ִ�����2
* 
* int main()
{
	int age = 20;
	if(age<18)
		printf("δ����\n");
	else
		printf("����\n");
	return 0;
}

* ���֦
* if(���ʽ1)
* ���1��
* else if(���ʽ2)
* ���2��
* else
* ���3��
* 
* int main()
{
	int age = 100;
	if(age<18)
		printf("δ����\n");
	else if(age<28&&age >= 18)
		printf("����\n");
	else if (age < 50 && age >= 28)
		printf("׳��\n");
	else
		printf("����\n");
	return 0;
}
* 
*/
/*
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha");
	return 0;
}
������Ϊ�գ�else�����if��ƥ��
*/


/*if��д��ʽ�Ա�
if (condition) {
	return X;
}
return y;

if (condition)
{
	return X;
}
else
{
	return y;
}
�������н����ͬ ������������X ����������Y
*/

/*
int main()
{
	int a = 4;
	if (5=a)//=�Ǹ�ֵ   ==�ж����
	{
		printf("hehe");
	}
	return 0;
}
*/

/*
��ϰ
1.�ж�һ�����Ƿ�Ϊ����
2.���1-100֮�������

int main()
{
	int a = 5;
	if (a % 2 ==1)
		printf("����Ϊ����\n");
	else
		printf("����Ϊż��\n");
	return 0;
}

int main()
{
	int i=0;
	for (i = 1; i < 101; i++)
	{
		if (i % 2 == 1)
			printf("%d ",i);
	}

	return 0;
}
*/

/*switch���  �������ڶ��֦
switch (���α��ʽ)
{
	�����;
	case x : ���ͳ������ʽ
}
default: ���б�ʾ��ֵ��caseֵ����ƥ��ʱ��default�����������ԣ����򲢲�����ֹ��ִ��default���Ӿ�
һ��switch�����ֻ�ܳ���һ��default

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:  
		printf("�������\n");
		break;

	}
}
*/

/*while �﷨�ṹ  �ж�Ϊ��һֱִ�� ֱ���ٽ���
while (���ʽ)
ѭ�����;

int main()
{
	int i = 0;

	while (i <= 10)
	{
		if (5 == i)
			continue;//��ֹ����ѭ��������continue������벻��ִ��
//breakֱ����ֹѭ��
		printf("%d", i);
		i++;
	}
}
*/
/*�κ󲹳�
* getchar Ϊ��ȡһ���ַ�
* putchar Ϊ���һ���ַ�
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);

	}
	return 0;
}
*/
