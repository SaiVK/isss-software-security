#include "stdio.h"

int glb=55;
const int glb2 = 66;

int dummy(){
	int i;
	i=i+5;
}
int main(){
	int a = 1;
	a = a+2;
	
	printf("\nIn function main 1\n");
	// fun1();
	printf("\nIn function main 2\n");
	// fun2();	
}
