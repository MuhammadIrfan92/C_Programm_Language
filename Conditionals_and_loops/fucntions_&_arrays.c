#include <stdio.h>

int sum(int* , int ); // the parameter names can be omitted but type must be specified while defining function prototypes
int* get_events(); // a function that returns the ""pointer"
int main(){
	int a[]={1,2,3,4,5};
	int* ptr;
	int k;
	
	printf("Sum of array elements is:%d\n",sum(a,sizeof(a)/sizeof(a[0])));
	
	ptr = get_events(); //get first 5 even numbers in form of array
	
	for ( k = 0; k < 5; k++){
		printf("%d\n",ptr[k]);
	}

	return 0;
}

int sum(int* array, int num_of_elements){
	int total=0;
	int k=0;
	for (k=0;k<num_of_elements;k++){
		total+=array[k];
	}
	return total;
	
}

int* get_events(){
	static int nums[5];
	int k;
	int even = 0;
	for (k=0;k<5;k++){
		nums[k]= even +=2;
	}
	return (nums);
}

/*Just as a pointer to an array can be passed into a function, a pointer to an array can be returned*/


