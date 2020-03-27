#define _CRT_SECURE_NO_WARNINGS

//递归的思想： 大事化小
#include<stdio.h>
//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//123
//	Print(num);
////	//Print(123)
////	//Print(12)+3
////	//Print(123/10)+(123%10)
////	//Print(1)+2+3
////	//1 2 3
////	//一位一位剥离出来
////	//递归把问题化简
//    return 0;
//}






//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//#include<string.h>
//int main()
//
//{
//	char arr[] = "bit";//数组名是首元素地址 char的地址char*
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	/*my_strlen("bit");
//	1 + my_strlen("it");
//	1 + 1 + my_strlen("t");
//	1 + 1 + 1 + my_strlen("");
//	1 + 1 + 1 + 0;
//	3;*/
//	return 0;
//}




//n的阶乘 
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	//int i = 0;
//	//int ret = 1;
//	//for (i = 1; i <= n; i++)
//	//{
//	//	ret = ret*i;
//	//}
//	printf("ret=%d\n", ret);
//	return 0;
//}






//求第n个斐波那契数
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55 ...


int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n -- ;
	}
	return c;
//	/*if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);*/
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	/*int ret = Fib(n);*///第n个斐波那契数的求取 不适合递归求解
	int ret = Fib(n);
//	//求第50个
//	//就要求出49 48
//	//48 47  47 46
//	//47 46  46 45  45 44
//	//...
//
	printf("%d\n", ret);
	return 0;
}

 