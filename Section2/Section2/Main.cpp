#include<stdio.h>
#include<iostream>
//#define LOCAL
#pragma warning(disable:4996)
void aabb();
void bbaa();
void nadd1();
void approximate();
void factorial();
void datastat();
void daffodil();
void trangle();

void test();
void decimal();
int main(){
	//aabb();
	//bbaa();
	//nadd1();
	//approximate();
	//factorial();
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);
#endif
	//datastat();
	//daffodil();
	//trangle();

	//test();
	decimal();
	system("PAUSE");

	return 0;
}