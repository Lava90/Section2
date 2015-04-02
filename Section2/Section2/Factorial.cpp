#include<stdio.h>
#include<time.h>
void factorial(){
	int n;
	scanf_s("%d",&n);
	int sum = 0;
	for (int i = 1;i<=n;i++){
		int factorial = 1;
		for (int j = 1;j<=i;j++){
			factorial = factorial*j;
		}
		sum += factorial;
	}
	printf_s("%d\n",sum%1000000);
	printf_s("%.2f\n",(double)clock()/CLOCKS_PER_SEC);
}
