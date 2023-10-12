#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b) {
	return a+b;
}
int square(int n){
	return n*n;
}
int get_max(int x, int y) {
	if (x>y){
		return x;
}else{
	return y;
}		
}
int main(int argc, char *argv[]){
	int a, b;
	int n;
	int x, y;	
	a=3;
	b=4;
	printf("%i\n", sumTwo(a,b));
	n=5;
	printf("%i\n", square(n));
	x=6;
	y=7;
	printf("%i\n", get_max(x, y));
	
	return 0;
}
