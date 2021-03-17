#include <stdio.h>

void main(){
	printf("Hello World\n");
	
	int a = 3, b = 2;
	if (a == b || a < b){
		printf("First Condition\n");
	}
	else if(a != b){ //In C, any non-zero value is considered true and a 0 is false. The logical 
	//NOT operator therefore, converts a true value to 0 and a false value to 1.
		printf("Second COndition\n");
	}
	
}
