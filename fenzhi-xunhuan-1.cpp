#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* if语句
*
* if(表达式)
* 语句；
* 真执行语句 假什么都不执行
* 
*  int main()
{
	int age = 20;
	if(age>18)
		printf("成年");
	return 0;
}

* if(表达式)
* 语句1；
* else
* 语句2；
* 真执行语句1 假执行语句2
* 
* int main()
{
	int age = 20;
	if(age<18)
		printf("未成年\n");
	else
		printf("成年\n");
	return 0;
}

* 多分枝
* if(表达式1)
* 语句1；
* else if(表达式2)
* 语句2；
* else
* 语句3；
* 
* int main()
{
	int age = 100;
	if(age<18)
		printf("未成年\n");
	else if(age<28&&age >= 18)
		printf("青年\n");
	else if (age < 50 && age >= 28)
		printf("壮年\n");
	else
		printf("老年\n");
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
输出结果为空，else跟最近if相匹配
*/


/*if书写形式对比
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
上述运行结果相同 条件成立返回X 不成立返回Y
*/

/*
int main()
{
	int a = 4;
	if (5=a)//=是赋值   ==判断相等
	{
		printf("hehe");
	}
	return 0;
}
*/

/*
练习
1.判断一个数是否为奇数
2.输出1-100之间的奇数

int main()
{
	int a = 5;
	if (a % 2 ==1)
		printf("此数为奇数\n");
	else
		printf("此数为偶数\n");
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

/*switch语句  常常用于多分枝
switch (整形表达式)
{
	语句项;
	case x : 整型常量表达式
}
default: 所有表示的值与case值都不匹配时用default跳过所有语言，程序并不会终止，执行default的子句
一个switch语句中只能出现一个default

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	default:  
		printf("输入错误\n");
		break;

	}
}
*/

/*while 语法结构  判断为真一直执行 直到假结束
while (表达式)
循环语句;

int main()
{
	int i = 0;

	while (i <= 10)
	{
		if (5 == i)
			continue;//终止本次循环，本次continue后面代码不会执行
//break直接终止循环
		printf("%d", i);
		i++;
	}
}
*/
/*课后补充
* getchar 为获取一个字符
* putchar 为输出一个字符
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
