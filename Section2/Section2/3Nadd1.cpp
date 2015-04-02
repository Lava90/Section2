#include<stdio.h>
/*
	对于任意大于1的自然数n，若n为奇数。则将n变为3n+1。否则变为n的一半。
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