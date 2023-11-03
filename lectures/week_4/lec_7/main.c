#include <stdio.h>

int *arr;
char glb;

int fun1(int a, int b, int c){
	arr = malloc(5*sizeof(int));
	int i = 0;
	while(i<5){
		arr[i] = 1;
		i++;
	}
	for(int i=0; i<5; i++){
		printf("\narr[%d] => %d", i, arr[i]);
	}
	printf("\na = %d | b = %d | c = %d\n\n",a,b,c);
}

int main(){
	int a = 0;
	int b = 1;
	int c = 2;
	glb = 5;
	fun1(a, b, c);
}