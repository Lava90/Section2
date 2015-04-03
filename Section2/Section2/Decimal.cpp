#include<stdio.h>
void decimal(){
	int a, b, c;
	double result;
	scanf_s("%d %d %d",&a,&b,&c);
	result = (double)a / b;
	//int hig, low, i;
	printf_s("%.*f\n",c,result);

}