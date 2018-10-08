//将两个长度相同的数组的内容进行交换
//方法1
//创建临时变量法
//创建一个临时变量
//创建一个for循环
//通过将赋值的方法达到两个数组内容交换的目的
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int arr1[] = { 1,3,5,8,9,0,2 };
//	int arr2[] = { 3,6,7,8,1,2,5 };//创建两个长度一样的数组
//	int i;
//	int t;
//	for (i = 0; i < 7; i++)
//	{
//		t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//	}
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");//全部在一行打印
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
////方法2
////通过异或运算来进行交换
////逻辑就为相同为0,不同为1
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int i;
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 5,6,7,8 };
//	for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)//测出数组整个所占的字节数再除以一个元素所占的字节数(测数组长度)
//	{
//		arr1[i] = arr1[i] ^ arr2[i];
//		arr2[i] = arr1[i] ^ arr2[i];
//		arr1[i] = arr1[i] ^ arr2[i];
//
//	}
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
////计算1-1/2+1/3-1/4+.....+1/99的值
////思路
////可以看到这些数中,分母为奇数项的值为的值为负,分母为偶数项的值为正
////可以将奇数部分与偶数部分分开计算最后加在一起
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int i;
//	double sum1=0;
//	double sum2=0;
//	double sum;
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum1 = sum1 + 1.0 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 = sum2 - 1.0 / i;//要注意:偶数项都为负值,所以为-号
//	}
//	sum = sum1 + sum2;
//	printf("这些数的和为:%lf", sum);//注意:此处的结果可能我分数,所以要用if%输出
//	system("pause");
//	return 0;
//}
////编写程序数一下 1到 100 的所有整数中出现多少次数字9
////满足上述条件的有类似9,19,29这样的数,所以让这些数用10取余结果为9就输出
////但是有一个特殊情况就是99,这种情况需要特殊考虑
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9) 
//		{
//			sum++;
//		}
//		if (i / 10 == 9)//注意此处整数与整数相除还为整数,这儿判定的是类似91,92,93,94这样的数 
//		{
//			sum++;
//		}
//	}
//	printf("1-100中出现9的次数为%d", sum);
//	system("pause");
//	return 0;
//}
//函数形式
#include<stdio.h>
#include<windows.h>
int ninecount(int x)
{
	int count = 0;
	if (x % 10 == 9)
	{
		count++;
	}
	if (x / 10 == 9)
	{
		count++;
	}
	return count;
}
int main()
{
	int count = 0;
	int i = 1;
	for (i = 1; i < 100; i++)
	{
		count += ninecount(i);//函数的调用
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}