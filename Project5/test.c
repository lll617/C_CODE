#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//#include <math.h>

int main()
{
	unsigned char a = 100;
	unsigned char b = 200;
	unsigned char c = 0;
	c = a + b;
	printf("%d,%d\n", a + b, c);
	return 0;
}

//void mediate_arr(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		// �������ż��
//		while ((left < right) && arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		// ���ұ�������
//		while ((left < right) && arr[right] % 2 != 1)
//		{
//			right--;
//		}
//		// ����
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	mediate_arr(arr,sz);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	// ���������ˮ
//	//int total = money * 2 - 1;
//	int total = money;
//	int empty = money;
//	// ����������ˮ
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//}

//int Buy_juice(int money)
//{
//	return money;
//}
//
//int Swap_juice(int bottle)
//{
//	int juice = 0;
//	if (bottle < 2)
//	{
//		return juice;
//	}
//	else if (bottle % 2)// ƿ������
//	{
//		juice += bottle / 2;
//		juice +=Swap_juice(bottle / 2 +1);
//	}
//	else// ƿ��ż��
//	{
//		juice += bottle / 2;
//		juice += Swap_juice(bottle / 2);
//	}
//	return juice;
//}
//
//int main()
//{
//	int money = 20;
//	int juice = Buy_juice(money);
//	juice += Swap_juice(juice);
//	printf("%d\n", juice);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0, j = 0;
//	// 1����ӡ�ϰ벿�� line��
//	for ( i = 0; i < line; i++)
//	{
//		// ��ӡ�ո�
//		for ( j = 0; j < line -1-i; j++)
//		{
//			printf(" ");
//		}
//		// ��ӡ*
//		for ( j = 0; j < 1+2*i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	 //2����ӡ�°벿�� line-1��
//	for ( i = 0; i < line-1; i++)
//	{
//		// ��ӡ�ո�
//		for ( j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		// ��ӡ*
//		for ( j = 0; j < (line-1-i)*2-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define ROW 15
//#define COL 15
//int main()
//{
//	// 1����ӡ13�У�13��
//	int i = 0;
//	int j = 0;
//	char arr[ROW][COL] = { 0 };
//	for ( i = 0; i < ROW; i++)
//	{
//		for ( j = 0; j < COL; j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//
//	// ��ӡǰ����
//	for ( i = 0; i <= ROW/2; i++)
//	{
//		int mid = ROW / 2;
//		// 2����һ��1��*������������Ϊ2��������13��
//		arr[i][mid] = '*';
//		int tmp = i;
//		int left = mid, right = mid;
//		while (tmp>0)
//		{
//			arr[i][--left] = '*';
//			arr[i][++right] = '*';
//			tmp--;
//		}
//	}
//	
//	// 3���ڰ��еݼ�������2����ʮ����1��
//	for ( i = ROW/2+1; i <=ROW-1; i++)
//	{
//		int mid = ROW / 2;
//		// 2����һ��1��*������������Ϊ2��������13��
//		arr[i][mid] = '*';
//		int tmp = i;
//		int left = mid, right = mid;
//		while (tmp<ROW-1)
//		{
//			arr[i][--left] = '*';
//			arr[i][++right] = '*';
//			tmp++;
//		}
//	}
//
//	for ( i = 0; i < ROW; i++)
//	{
//		for ( j = 0; j < COL; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 10000; i++)
//	{
//		// 1������i��λ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//		{
//			n++;
//		}
//
//		// 2������ÿλ��n�η�֮��sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		
//		// 3���Ƚ�sum��i
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int ciFang(int a,int count)
//{
//	int ret = a;
//	if (count > 1)
//	{
//		while (count > 1)
//		{
//			ret = ret * a;
//			count--;
//		}
//	}
//	else {
//		ret = a;
//		return ret;
//	}
//	
//	return ret;
//}
//
//// ������������ˮ�ɻ�����
//int main()
//{
//	int i = 0,   tmp = 0;// count��ʾ��λ��,a��ʾÿλ
//	for ( i = 1; i <= 10000; i++)
//	{
//		int sum = 0, count = 0, a = 0;
//		// ����ʱ����tmp����i����λ��
//		tmp = i;
//		// ��ȡi��λ��
//		while (tmp>0)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		tmp = i;
//		// ��ȡ��ʮ�ٵ�ÿλ
//		while (tmp>0)
//		{
//			a = tmp % 10;
//			tmp = tmp / 10;
//			// ����ÿλ��count�η�,���ۼ�
//			sum +=ciFang(a, count);
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//
//	}
//	return 0;
//}

//int Sn(int a, int n)
//{
//	int ret = 0,b=a;
//	while (n>0)
//	{
//		ret += b;
//		b = b * 10 + a;
//		n--;
//	}
//	return ret;
//}
//
//int main()
//{
//	int a = 0, n = 0;
//	scanf("%d%d", &a, &n);
//	int ret = Sn(a, n);
//	printf("%d\n",ret);
//	return 0;
//}

//void reverse(char* arr)
//{
//	assert( arr!=NULL );
//	int len = strlen(arr);
//	int start = 0;
//	int end = len - 1;
//	char tmp = 0;
//	while (start < end)
//	{
//		tmp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = tmp;
//		start++;
//		end--;
//	}
//
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	// a�����������Ԫ�أ���'w','a','a'�ĵ�ַ
//	char** p = a;// p��ָ��w��ַ�ĵ�ַ��ָ�룩
//	p++;// p++��pָ����at��a�ĵ�ַ
//	printf("%s\n", *p);// �����ú���at��a�ĵ�ַ,��ӡ�ַ���ʱ���Ĳ������ַ���ַ��ָ�룩
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)*(aa + 1);//aa��1�õ��ڶ��еĵ�ַ�������õõ��ڶ������飬����Ԫ�ص�ַ
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//struct Test
//{
//	int Name;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
//int main()
//{
//	int a[5][5];
//	int (*p)[4] = a; // p��ָ��4��Ԫ�ص�����ָ��
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	// p[4] == *(p+4),�����õõ�4��Ԫ�ص����飬�൱���õ�������������Ԫ�ص�ַ��
//	// p[4][2] == *(*(p+4)+2),��Ԫ�ص�ַ+2�����ã��õ�����ĵ�����Ԫ��
//	// ��ַ�����-4����Ϊ��ַ��ӡ��-4ת��Ϊ���룬�ٰ���ַ��ӡ
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };// ����Ϊ���ű��ʽ�����Ϊ���һ��
//	int* p = a;
//	printf("%d\n", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);// С�˴洢 10 00 00 00 02 00 00 00 00
//	// ǿתΪint����+1��תΪintָ�룬�൱�ڵ�ַ+1��
//	printf("%x,%x\n", ptr1[-1], *ptr2);//4,2 00 00 00 00,�����ﱨ�����Խ�磿
//	return 0;
//}

// pΪ�ṹ��ָ�룬����p��ֵΪ0x100000�������±��ʽ��ֵ
// ��֪�ṹ��Test���͵ı�����СΪ20�ֽ�(32λϵͳ��64λΪ32)
// ����ָ��+1
//int main()
//{
//	p = (struct Test*)0x100000;// ������0x100000ǿתΪ�ṹ������ָ�븳��p��
//	printf("%d\n", sizeof(*p) / sizeof(char));
//	printf("%p\n", p + 0x1);// 100014/100020
//	printf("%p\n", (unsigned long)p + 0x1);// 100001 �ṹ��ָ��p��ǿתΪunsigned long �������ͣ����Ǽ�+1.
//	printf("%p\n", (unsigned int*)p + 0x1);// 100004
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);// (&a + 1)��int (*) [5] �����ַ������ǿתΪintָ���ַptr
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}

//int main()
//{
//	// ��ά����
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));// 4
//	printf("%d\n", sizeof(a[0]));// 16 a[0]�൱�ڵ�һ�е���������sizeof(������)
//	printf("%d\n", sizeof(a[0]+1));// 8 a[0]�ǵ�һ�е���������û��sizeof(a[0])��&a[0],
//	// a[0]�ǵ�һ��������Ԫ�صĵ�ַ��a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0]+1)));//4 �����õ�һ�еڶ���Ԫ�ص�ַ���õ�a[0][1]
//	printf("%d\n", sizeof(a+1));//8 a�Ƕ�ά����ĵ�һ��Ԫ�ص�ַ������һ�������ַ��
//	// a+1���ǵڶ���Ԫ�ص�ַ���ڶ��������ַ
//	printf("%d\n", sizeof(*(a+1)));//16 �����õڶ��������ַ���õ��ڶ�������
//	printf("%d\n", sizeof(&a[0]+1));//8 &a[0]�õ���һ�������ַ��+1��õ��ڶ��������ַ
//	printf("%d\n", sizeof(*(&a[0]+1)));//16 �����õڶ��������ַ���õ��ڶ���
//	printf("%d\n", sizeof(*a));//16 a�Ƕ�ά������Ԫ�ص�ַ������һ�������ַ�������õõ���һ������
//	printf("%d\n", sizeof(a[3]));//16 sizeof()�ڵı��ʽ�����������㣬ֻ�����ͼ����С���൱��a[0],����Խ�籨��
//
//	/*char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof( & arr));
//	printf("%d\n", sizeof( & arr + 1));*/
//
//	//char* p = "abcdef";
//
//	//printf("%d\n", strlen(p));// 6
//	//printf("%d\n", strlen(p+1));// 5
//	////printf("%d\n", strlen(*p));// err
//	////printf("%d\n", strlen(p[0]));// err
//	//printf("%d\n", strlen(&p));// ���ֵ
//	//printf("%d\n", strlen(&p+1));// ���ֵ
//	//printf("%d\n", strlen(&p[0]+1));// 5
//
//	//printf("%d\n", sizeof(p));// 8
//	//printf("%d\n", sizeof(p+1));// 8
//	//printf("%d\n", sizeof(*p));// 1
//	//printf("%d\n", sizeof(p[0]));// 1
//	//printf("%d\n", sizeof(&p));// 8
//	//printf("%d\n", sizeof(&p+1));// 8
//	//printf("%d\n", sizeof(&p[0]+1));// 8
//
//	//char arr[] = "abcdef";
//
//	//printf("%d\n", strlen(arr));// 6
//	//printf("%d\n", strlen(arr+0));// 6
//	////printf("%d\n", strlen(*arr));// err
//	////printf("%d\n", strlen(arr[1]));// err
//	//printf("%d\n", strlen(&arr));// 6
//	//printf("%d\n", strlen(&arr+1));// ���ֵ
//	//printf("%d\n", strlen(&arr[0]+1));// 5
//
//	//printf("%d\n", sizeof(arr));//5
//	//printf("%d\n", sizeof(arr+0));//8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//8
//	//printf("%d\n", sizeof(&arr+1));//8
//	//printf("%d\n", sizeof(&arr[0]+1));//8
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { 0 }, (*ptr)[2], i;
//	for ( i = 0; i < 2; i++)
//	{
//		ptr = a + i;
//		//scanf("%p\n", ptr);
//		ptr++;
//	}
//
//	return 0;
//}

//int main()
//{
//	//int a[] = {1,2,3,4};
//	//printf("%d\n", sizeof(a));//16
//	//printf("%d\n", sizeof(a+0));//8
//	//printf("%d\n", sizeof(*a));//4
//	//printf("%d\n", sizeof(a+1));//8
//	//printf("%d\n", sizeof(a[1]));//4
//	//printf("%d\n", sizeof(&a));// 8
//	//printf("%d\n", sizeof(*&a));// 16 &a�����������ַ�������ú�õ��������飬�ȼ���sizeof(a)
//	//printf("%d\n", sizeof(&a+1));// 8 ���������������ַ�����ǵ�ַ
//	//printf("%d\n", sizeof(a[0]));// 4
//	//printf("%d\n", sizeof(a[0]+1));// 4
//
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", strlen(arr));// ���ֵ
//	printf("%d\n", strlen(arr+0));// ���ֵ
//
//	// printf("%d\n", strlen(*arr));// err
//	// printf("%d\n", strlen(arr[0]));// err
//
//	printf("%d\n", strlen(&arr));// ���ֵ
//	printf("%d\n", strlen(&arr+1));// ���ֵ-6
//	printf("%d\n", strlen(&arr[0]+1));// ���ֵ - 1
//
//	//printf("%d\n", sizeof(arr));// 6
//	//printf("%d\n", sizeof(arr+0));// 8
//	//printf("%d\n", sizeof(*arr));// 1
//	//printf("%d\n", sizeof(arr[1]));// 1
//	//printf("%d\n", sizeof(&arr));// 8
//	//printf("%d\n", sizeof(&arr+1));// 8
//	//printf("%d\n", sizeof(&arr[0]+1));// 8
//
//	return 0;
//}

//void Bubble_sort(int arr[],int sz)
//{
//	int i = 0, j = 0, tmp = 0;
//	// Ҫ�ȵ�����
//	for ( i = 0; i < sz-1; i++)
//	{
//		// ÿ��Ҫ�ȵĴ���
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1]) {
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}



//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	/*if (*(float*)e1 > *(float*)e2)
//	{
//		return 1;
//	}
//	else if(*(float*)e1 < *(float*)e2)
//	{
//		return -1;
//	}
//	else
//	{
//		return  0;
//	}*/
//
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
////
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp( ((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
////
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = 0;
//		tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
//{
//	int i = 0, j = 0;
//	// �Ƚϵ�����
//	for (i = 0; i < sz - 1; i++)
//	{
//		// ÿ�˱ȽϵĴ���
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			// �Ƚ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width))
//			{
//				// ����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
////void test()
////{
////	int arr[] = { 9,8,7,6,5,4,3,2,1 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	//Bubble_sort(arr, sz);
////	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
////
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////}
////
////void test1()
////{
////	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0 };
////	int sz = sizeof(f) / sizeof(f[0]);
////	bubble_sort(f, sz, sizeof(f[0]), cmp_float);
////
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%f ", f[i]);
////	}
////}
////
//void test2()
//{
//	struct Stu s[] = { {"zhangsan",20},{"lisi",30} ,{"wz",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_name);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//	}
//}
////
//void test3()
//{
//	struct Stu s[] = { {"zhangsan",20},{"lisi",30} ,{"wz",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_age);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", s[i].age);
//	}
//}
//
//int main()
//{
//	//test();
//	//test1();
//	//test2();
//	//test3();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char b = 'b';
//
//	void* p = &a;
//	p = &b;
//	//*p;//err
//	//p++;//err
//
//	// void* ����ָ�룬���Խ����κ����͵ĵ�ַ��
//	// ���ɽ����ã����ܽ���+-������������ָ���С��ȷ����
//}