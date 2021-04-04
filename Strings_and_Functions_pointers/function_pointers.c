#include <stdio.h>

void say_hello(int num);
void add( int a , int b);
void sub(int a, int b);
void mul(int a , int b);

int main(){
	
	void (*funptr)(int);
	funptr=say_hello;
	funptr(3);
	
	void (*funptr_calculator[])(int a, int b)={add, sub, mul}; //array of funtion pointers.
	

	funptr_calculator[1](3,4);
	
	
	return 0;
}


void add(int a, int b){
	printf("Addition is %d\n", a+b);
}

void sub (int a, int b){
	printf("sub is %d\n", a-b);
}

void mul ( int a, int b){
	printf("mul is %d\n", a*b);
}

void say_hello(int num){
	int k;
	for (k=0;k<num;k++){
		printf("say hello\n");
	}
}
