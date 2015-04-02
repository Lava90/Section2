#include<stdio.h>
void approximate(){
	int count = 0;
	double sum = 0;
	for (int i = 1;;i++){

		double n = 1.0 / (2 * i + 1);
		if (i%2==0){
			//printf_s("%0.6f\n", sum);
			sum = sum + n;
		}
		else{
			sum = sum - n;
		}
		if (n<=1e-6){
			break;
		}
	}
	printf_s("%0.6f\n",sum);
}