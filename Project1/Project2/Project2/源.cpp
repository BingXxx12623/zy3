//������������ͬ����������ݽ��н���
//����1
//������ʱ������
//����һ����ʱ����
//����һ��forѭ��
//ͨ������ֵ�ķ����ﵽ�����������ݽ�����Ŀ��
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int arr1[] = { 1,3,5,8,9,0,2 };
//	int arr2[] = { 3,6,7,8,1,2,5 };//������������һ��������
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
//	printf("\n");//ȫ����һ�д�ӡ
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
////����2
////ͨ��������������н���
////�߼���Ϊ��ͬΪ0,��ͬΪ1
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int i;
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 5,6,7,8 };
//	for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)//�������������ռ���ֽ����ٳ���һ��Ԫ����ռ���ֽ���(�����鳤��)
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
////����1-1/2+1/3-1/4+.....+1/99��ֵ
////˼·
////���Կ�����Щ����,��ĸΪ�������ֵΪ��ֵΪ��,��ĸΪż�����ֵΪ��
////���Խ�����������ż�����ַֿ�����������һ��
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
//		sum2 = sum2 - 1.0 / i;//Ҫע��:ż���Ϊ��ֵ,����Ϊ-��
//	}
//	sum = sum1 + sum2;
//	printf("��Щ���ĺ�Ϊ:%lf", sum);//ע��:�˴��Ľ�������ҷ���,����Ҫ��if%���
//	system("pause");
//	return 0;
//}
////��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9
////��������������������9,19,29��������,��������Щ����10ȡ����Ϊ9�����
////������һ�������������99,���������Ҫ���⿼��
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
//		if (i / 10 == 9)//ע��˴����������������Ϊ����,����ж���������91,92,93,94�������� 
//		{
//			sum++;
//		}
//	}
//	printf("1-100�г���9�Ĵ���Ϊ%d", sum);
//	system("pause");
//	return 0;
//}
//������ʽ
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
		count += ninecount(i);//�����ĵ���
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}