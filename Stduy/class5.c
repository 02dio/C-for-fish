#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����Ƕ����һ������
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	//��ʶѡ�����
	int sex = 0;
	printf("��ӭ�����˱���ҵְҵ����ѧԺ����\n");
	printf("����������������Ů����1/0��?>:");
	scanf("%d", &sex);

	if (sex == 1)
		printf("��ӭ�����������ᣡ��");
	else
		printf("��ӭ����Ů�����ᣡ��");


	//��ʶѭ�����
	int mark = 0;
	while (mark < 500)
	{
		printf("Ŭ��ѧϰ�ĵ�%d��\n", mark);
		mark++;
	}
	if (mark == 500)
	{
		printf("��ϲ��ѧϰ��500�����������\n");
	}



	//��ʶ����	
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	//����Add����
	int sum = Add(num1, num2);

	printf("%d\n", sum);

	return 0;
}