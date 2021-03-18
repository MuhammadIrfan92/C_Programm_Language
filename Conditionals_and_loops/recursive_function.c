#include <stdio.h>

int fact(int num);

int main(){
	int num = 4;
	printf("Factorial of %d is: %d\n",num,fact(num));
	return 0;
}
/*Recursive function*/
//Recursion works by "stacking" calls until the base case is executed
int fact (int num){
	if (num==1){
		return num;
	}
	else{
		return num * fact(num -1);
	}
}
