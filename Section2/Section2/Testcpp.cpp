#include<stdio.h>
void test(){
	/*
	int m, n;
	while (scanf_s("%d %d",&m,&n)&&(m||n)){
		printf_s("%d",m+n);
	}
	*/
	/*
	int n, i;
	int a, b;
	scanf_s("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf_s("%d%d", &a, &b);
		printf("%d\n", a + b);
	}
	*/
	/*int a, b;
	while (scanf_s("%d %d", &a, &b) != EOF) // 输入结束时，scanf函数返回值为EOF(-1)，即没有数据输入时会退出while循环  
	{
		printf("%d\n", a + b);
	}
	*/
	//freopen("input.txt", "r", stdin);  //只加这一句输入将被重定向到文件input.txt  
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("%d\n", a + b);



}