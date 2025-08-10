#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//下列代码将展示局部变量和全局变量的作用域
int c = 10; //首先定义一个全局变量c

int main()
{
	printf("1:%d\n", c);//首次打印全局变量c的值
	{                   //该括号为了展示局部变量和全局变量的作用域
		int a = 5; //定义一个局部变量a
		printf("2:%d\n", c);//第二次打印全局变量c的值
		printf("%d\n", a);//打印局部变量a的值
	}
	printf("3:%d\n", c);//第三次打印全局变量c的值
	//printf("%d\n", a); 
	// 如果取消注释将会报错，因为a是局部变量，作用域只在上面的括号内
	return 0;
}

//全局变量在整个工程中都可访问，下列展示如何在其他文件中使用全局变量c
//用其他文件不直观，假设下列代码在其他文件中

extern int c; //声明全局变量c，表示c在其他文件中定义

int main()
{
	printf("%d\n", c);
	//正常来说c在另一个文件中无法调用，但是加入上述声明即可使用

	return 0;
}

//常量的分类如下

//1.字面常量
int main()
{
	10;//10就是一个字面常量
	3.14;//3.14也是一个字面常量
	'A';//'A'也是一个字面常量
	return 0;
}

//2.const常量
int main()
{
	//定义一个const常变量a,具有常量的特性，但本质上是一个变量
	const int a = 10; 
	printf("%d\n", a); //打印const常量a的值
	//a = 20; 
	//如果取消注释将会报错，因为const常量的值不能被修改
	return 0;
}

//3. #define 定义的标识符常量
#define PI 3.14 //定义一个标识符常量PI
int main()
{
	printf("%f\n", PI); //打印标识符常量PI的值
	//PI = 3.14159; 
	//如果取消注释将会报错，因为标识符常量的值不能被修改
	return 0;
}

//4.枚举常量（可以一一列举的常量）
enum Color { RED, GREEN, BLUE }; //定义一个枚举常量Color
int main()
{
	enum Color c = RED; //定义一个枚举常量c，初始值为RED
	printf("%d\n", c); //打印枚举常量c的值
	c = GREEN; //修改枚举常量c的值
	printf("%d\n", c); //打印修改后的枚举常量c的值
	return 0;
}

