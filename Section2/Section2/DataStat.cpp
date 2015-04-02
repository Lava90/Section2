#include<stdio.h>

void datastat(){
	int x;
	int n = 0;
	int max, min;
	double sum=0;
	while (scanf_s("%d",&x)==1){
		if (n==0){
			max = min = x;
			n++;
			sum += x;
		}
		else{
			if (max < x) max = x;
			if (min > x) min = x;
			sum += x;
			n++;
		}
	}
	printf_s("%d %d %.2f\n",min,max,sum/n);

}