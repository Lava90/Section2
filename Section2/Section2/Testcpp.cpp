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
	while (scanf_s("%d %d", &a, &b) != EOF) // �������ʱ��scanf��������ֵΪEOF(-1)����û����������ʱ���˳�whileѭ��  
	{
		printf("%d\n", a + b);
	}
	*/
	//freopen("input.txt", "r", stdin);  //ֻ����һ�����뽫���ض����ļ�input.txt  
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("%d\n", a + b);



}