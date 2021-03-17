#include <stdio.h>

void main(){
	printf("Hello World\n");
	
	int a = 3, b = 2, count = 0, count1=0;
	if (a == b || a < b){
		printf("First Condition\n");
	}
	else if(a != b){ //In C, any non-zero value is considered true and a 0 is false. The logical 
	//NOT operator therefore, converts a true value to 0 and a false value to 1.
		printf("Second COndition\n");
	}
	/*While loop*/
	while (count < 8){
		
		count++;
		if(count==3)
			continue; //to skip one iteration
		
		printf("%d\n",count);

	}
	printf("\n");
	/*do while loop*/
	do{
		
		if(count1 == 5)
			break;  // to break out of the loop
		
		printf("%d\n",count1);
		count1++;
		
	}while(count1<8);
	
	printf("\n");
	/*For loop*/
	//for (x = 0, y = num; x < y; i++, y--) for loop with multiple conditions
	
	int i ;
	for (i = 0; i<=8; i++){
		printf("%d\n",i);
	}
	
}
