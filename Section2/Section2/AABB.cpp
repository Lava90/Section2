#include<stdio.h>
#include<math.h>
/*
	输出所有形如aab的4位完全平方数
*/
void aabb(){

	for (int a = 1;a<=9;a++){
		for (int b = 0;b<=9;b++){
			double n;
			n = a*1100+b*11;
			double m;
			m = floor(sqrt(n)+0.5);
			if (m*m==n){
				printf_s("%f\n",n);
			}
		}
	}

}

/*

	逆向推导
*/
void bbaa(){
	for (int x = 0; ;x++){
		int n;
		n = x*x;
		if (n<1000) continue;
		if (n>=9999)break;
		int hi = n / 100;
		int lo = n % 100;
		if (hi/10==hi%10&&lo/10==lo%10){
			printf_s("%d\n",n);
		}
	}

}