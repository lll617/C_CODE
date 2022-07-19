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
//		// 从左边找偶数
//		while ((left < right) && arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		// 从右边找奇数
//		while ((left < right) && arr[right] % 2 != 1)
//		{
//			right--;
//		}
//		// 交换
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
//	// 买回来的汽水
//	//int total = money * 2 - 1;
//	int total = money;
//	int empty = money;
//	// 换回来的汽水
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
//	else if (bottle % 2)// 瓶子奇数
//	{
//		juice += bottle / 2;
//		juice +=Swap_juice(bottle / 2 +1);
//	}
//	else// 瓶子偶数
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
//	// 1、打印上半部分 line行
//	for ( i = 0; i < line; i++)
//	{
//		// 打印空格
//		for ( j = 0; j < line -1-i; j++)
//		{
//			printf(" ");
//		}
//		// 打印*
//		for ( j = 0; j < 1+2*i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	 //2、打印下半部分 line-1行
//	for ( i = 0; i < line-1; i++)
//	{
//		// 打印空格
//		for ( j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		// 打印*
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
//	// 1、打印13行，13列
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
//	// 打印前七行
//	for ( i = 0; i <= ROW/2; i++)
//	{
//		int mid = ROW / 2;
//		// 2、第一行1个*，递增，公差为2，第七行13个
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
//	// 3、第八行递减，公差2，第十三行1个
//	for ( i = ROW/2+1; i <=ROW-1; i++)
//	{
//		int mid = ROW / 2;
//		// 2、第一行1个*，递增，公差为2，第七行13个
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
//		// 1、计算i的位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//		{
//			n++;
//		}
//
//		// 2、计算每位的n次方之和sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		
//		// 3、比较sum和i
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
//// 计算自幂数（水仙花数）
//int main()
//{
//	int i = 0,   tmp = 0;// count表示几位数,a表示每位
//	for ( i = 1; i <= 10000; i++)
//	{
//		int sum = 0, count = 0, a = 0;
//		// 用临时变量tmp代替i计算位数
//		tmp = i;
//		// 获取i的位数
//		while (tmp>0)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		tmp = i;
//		// 获取个十百的每位
//		while (tmp>0)
//		{
//			a = tmp % 10;
//			tmp = tmp / 10;
//			// 计算每位的count次方,并累加
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
//	// a数组存了三个元素，是'w','a','a'的地址
//	char** p = a;// p是指向w地址的地址（指针）
//	p++;// p++后p指向了at的a的地址
//	printf("%s\n", *p);// 解引用后是at的a的地址,打印字符串时传的参数是字符地址（指针）
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)*(aa + 1);//aa加1得到第二行的地址，解引用得到第二行数组，即首元素地址
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
//	int (*p)[4] = a; // p是指向4个元素的数组指针
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	// p[4] == *(p+4),解引用得到4个元素的数组，相当于拿到数组名，即首元素地址，
//	// p[4][2] == *(*(p+4)+2),首元素地址+2解引用，拿到数组的第三个元素
//	// 地址相减得-4，作为地址打印，-4转化为补码，再按地址打印
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };// 括号为逗号表达式，结果为最后一个
//	int* p = a;
//	printf("%d\n", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);// 小端存储 10 00 00 00 02 00 00 00 00
//	// 强转为int整型+1再转为int指针，相当于地址+1；
//	printf("%x,%x\n", ptr1[-1], *ptr2);//4,2 00 00 00 00,但这里报错访问越界？
//	return 0;
//}

// p为结构体指针，假设p的值为0x100000，求以下表达式的值
// 已知结构体Test类型的变量大小为20字节(32位系统，64位为32)
// 考察指针+1
//int main()
//{
//	p = (struct Test*)0x100000;// 将整数0x100000强转为结构体类型指针赋给p。
//	printf("%d\n", sizeof(*p) / sizeof(char));
//	printf("%p\n", p + 0x1);// 100014/100020
//	printf("%p\n", (unsigned long)p + 0x1);// 100001 结构体指针p被强转为unsigned long 整数类型，就是简单+1.
//	printf("%p\n", (unsigned int*)p + 0x1);// 100004
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);// (&a + 1)是int (*) [5] 数组地址，将其强转为int指针地址ptr
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}

//int main()
//{
//	// 二维数组
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));// 4
//	printf("%d\n", sizeof(a[0]));// 16 a[0]相当于第一行的数组名，sizeof(数组名)
//	printf("%d\n", sizeof(a[0]+1));// 8 a[0]是第一行的数组名，没有sizeof(a[0])和&a[0],
//	// a[0]是第一行数组首元素的地址，a[0]+1后是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0]+1)));//4 解引用第一行第二个元素地址，得到a[0][1]
//	printf("%d\n", sizeof(a+1));//8 a是二维数组的第一个元素地址，即第一行数组地址，
//	// a+1后是第二个元素地址，第二行数组地址
//	printf("%d\n", sizeof(*(a+1)));//16 解引用第二行数组地址，得到第二行数组
//	printf("%d\n", sizeof(&a[0]+1));//8 &a[0]得到第一行数组地址，+1后得到第二行数组地址
//	printf("%d\n", sizeof(*(&a[0]+1)));//16 解引用第二行数组地址，得到第二行
//	printf("%d\n", sizeof(*a));//16 a是二维数组首元素地址，即第一行数组地址，解引用得到第一行数组
//	printf("%d\n", sizeof(a[3]));//16 sizeof()内的表达式并不真正运算，只按类型计算大小，相当于a[0],不会越界报错
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
//	//printf("%d\n", strlen(&p));// 随机值
//	//printf("%d\n", strlen(&p+1));// 随机值
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
//	//printf("%d\n", strlen(&arr+1));// 随机值
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
//	//printf("%d\n", sizeof(*&a));// 16 &a是整个数组地址，解引用后得到整个数组，等价于sizeof(a)
//	//printf("%d\n", sizeof(&a+1));// 8 跳过了整个数组地址，还是地址
//	//printf("%d\n", sizeof(a[0]));// 4
//	//printf("%d\n", sizeof(a[0]+1));// 4
//
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", strlen(arr));// 随机值
//	printf("%d\n", strlen(arr+0));// 随机值
//
//	// printf("%d\n", strlen(*arr));// err
//	// printf("%d\n", strlen(arr[0]));// err
//
//	printf("%d\n", strlen(&arr));// 随机值
//	printf("%d\n", strlen(&arr+1));// 随机值-6
//	printf("%d\n", strlen(&arr[0]+1));// 随机值 - 1
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
//	// 要比的趟数
//	for ( i = 0; i < sz-1; i++)
//	{
//		// 每趟要比的次数
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
//	// 比较的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		// 每趟比较的次数
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			// 比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width))
//			{
//				// 交换
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
//	// void* 类型指针，可以接受任何类型的地址，
//	// 不可解引用，不能进行+-整数操作。（指针大小不确定）
//}