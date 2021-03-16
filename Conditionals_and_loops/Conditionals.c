#include <stdio.h>

int main(){
	int x = 56, y =5;
	printf("%d\n",(x>y)? x : y);
	
	if (x>y){
		printf("x:%d\n",x);
	}
	else if (x==y){
		printf("x=y\n");
	}
	else{
		printf("y:%d\n",y);
	}
	
	int num = 6, numi = 6;
	
	switch(num){
		case 5 :
		case 6 :
			printf("First Condition\n");
			break;
			
		case 7:
			printf("Second Condition\n");
			break;
			
		default:
			printf("Default\n");
	}
}
