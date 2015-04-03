#include<stdio.h>
/*
	输出100~999的所有水仙数
*/
void daffodil(){
	for (int i = 100;i<=999;i++){
		int a, b, c;
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if (i==a*a*a+b*b*b+c*c*c){
			printf_s("%d\n",i);
		}
	}

}