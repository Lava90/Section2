#include<stdio.h>
void subsquence(){
	int m, n;
	double sum=0.0;
	//scanf_s("%d %d",&m,&n);
	
	while (scanf_s("%d %d", &m, &n)&&(m||n)){
		for (int i = 0; i <= m - n; i++){
			int x;
			x = (n + i)*(n + i);
			sum = sum + 1.0 / x;
		}
		
	}
	
	/*do{
		for (int i = 0; i <= m - n; i++){
			int x;
			x = (n + i)*(n + i);
			sum = sum + 1.0 / x;
		}
	} while (scanf_s("%d %d", &m, &n) && (m || n));
	*/
	printf_s("%.5f\n", sum);
	
}