#include <stdio.h>

int main(){
	
	/*Arrays*/
	//Arrays are mutable i.e. can be modified
	int array[5]={1,2,3,4,5};
	int i;
	printf("Size(memory) of array is:%d\n",sizeof(array)/sizeof(array[0]));
	
	for ( i=0 ; i<5;i++){
		array[i] = i*2;
		printf("%d\n",array[i]);
		
	}
	return 0;
}
