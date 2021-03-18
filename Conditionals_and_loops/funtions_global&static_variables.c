#include <stdio.h>

int square (int a);
int sum_up(int x, int y);
void say_hello();

int global = 3 ; // global variable


int main(){
	int num=2, result;
	int x =3 , y = 4, sum;
	result=square(num);
	sum = sum_up(x,y);
	printf("The square of %d is:%d\n",num,result);
	printf(" %d + %d = %d",x,y,sum);
	int i = 0;
	for ( i; i < 7 ; i++){
		say_hello();
	}
	
	return 0;
}

	/*the variables are passed by value to the function the values of the variables are not effected by whetever happens inside the function.*/
	/*when vairables are passed to the fucntion they act as local variable and upon exiting the local variables and other parameters are destroyed*/
int square(int a){
	int res;
	res = a * a;
	return res;
}

int sum_up(int x, int y){
	x = x + y;
	printf("\n ans inside function is:%d\n ",x);
	return x;
}
/*Static Variables*/
void say_hello(){
	static int hello_num = 2;
	printf("\nHello %d\n",hello_num);
	hello_num++;
}

