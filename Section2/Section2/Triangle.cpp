#include<stdio.h>
/*
	"#" he " "  yu hang zhi jian de guan xi,
	di yi ge for xun huan dai biao hang shu
*/
void trangle(){
	int n;
	scanf_s("%d", &n);
	for (int i = n; i>0; i--){
		for (int j = n - i; j>0; j--){
			printf_s(" ");
		}
		for (int z = 2 * i - 1; z>0; z--){
			printf_s("#");
		}
		printf_s("\n");
	}
}