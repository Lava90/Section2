#include<stdio.h>
/*
	�����������1����Ȼ��n����nΪ��������n��Ϊ3n+1�������Ϊn��һ�롣
*/
void nadd1(){
	int n;
	scanf_s("%d",&n);
	int count=0;
	while (n>1){
		if (n%2!=0){
			n = 3*n + 1;
		}
		else{
			n = n / 2;
		}
		count++;
	}
	printf_s("%d\n",count);
}