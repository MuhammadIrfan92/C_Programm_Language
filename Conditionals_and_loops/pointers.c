#include <stdio.h>
void address( int num);

int main(){
	
	int i =0 , k=92;
	printf("Address of i is %X:\n",&i); //notice capital X
	address(i);
	printf("Address of i is %x:\n",&i);
	address(i);
	
	int *l;
	l = &k;
	
	printf("address of k is %x\n",&k);
	printf("values of k is %d\n",k);
	printf("l contains the addresss %x which is the address of k\n",l);
	printf("l points to the value %d which is the value of k\n",*l); 
	printf("%d\n",sizeof(i));
	
	int x = 12, y;
	int *ptr;
	ptr = &x;
	
	y = *ptr + 2;
	y += *ptr;
	*ptr = y;
	(*ptr)++; //notice the brackets, removed brackets give 92
	
	printf("value of x is %d which is pointed by pointer *ptr\n",*ptr);
	printf("value of y is %d",y);
	
	return 0;
}

void address(int num){
	printf("Address of num is:%x\n",&num);
}
