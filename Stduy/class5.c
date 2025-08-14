#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//这个是定义的一个函数
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	//初识选择语句
	int sex = 0;
	printf("欢迎来到宜宾工业职业技术学院！！\n");
	printf("请问你是男生还是女生（1/0）?>:");
	scanf("%d", &sex);

	if (sex == 1)
		printf("欢迎来到男生宿舍！！");
	else
		printf("欢迎来到女生宿舍！！");


	//初识循环语句
	int mark = 0;
	while (mark < 500)
	{
		printf("努力学习的第%d天\n", mark);
		mark++;
	}
	if (mark == 500)
	{
		printf("恭喜你学习完500天可以升本了\n");
	}



	//初识函数	
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	//调用Add函数
	int sum = Add(num1, num2);

	printf("%d\n", sum);

	return 0;
}