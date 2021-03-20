#include <stdio.h>

void swap(int* , int*);
void test(int * x) {
  *x += *x/2;
};
int main(){
	
	int a[5]={1,2,3,4,5};
	int* ptr;
	int i;
	int num1 = 3, num2 = 4;
	printf("value of num1 is %d, value of num2 is %d\n",num1,num2);
	
	/*call by reference*/
	swap(&num1,&num2);
	printf("after swap;value of num1 is %d, value of num2 is %d\n",num1,num2);
	
	
	ptr = a;
	/*arithmetic operations can be performed on pointers. in this case the pointer points to the integer i.e. first element of array is 1,
	so incrementing the address by 1, like ptr + 1, will increment the address by 4 bytes which is the size of integer datatype.*/
	// ++, --, +=.-=, ==, <=,>=, can also be used with pointer addresses
	for (i=0;i<5;i++){
		printf("Element accessed using pointer is:%d\n",*(ptr + i));
	}
	printf("the array name acts as a pointer for the first element of array:%d\n",*a);
	
	int v = 8;
	test(&v);
	printf("%d lol ", v);
	return 0;
	

	
}

void swap(int* num1, int* num2){
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

