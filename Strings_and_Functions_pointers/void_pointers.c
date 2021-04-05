#include <stdio.h>

void* square (const void *num); // Using a void * return type allows for any return type.
int compare (const void *elem1, const void *elem2);

int main(){
	int a = 33;
    float y = 12.4;
    char c = 'a';
    void *ptr;
  
    ptr = &a;
    printf("void ptr points to %d\n", *((int *)ptr)); // type casting void pointer to integer type pointer
    ptr = &y;
    printf("void ptr points to %f\n", *((float *)ptr)); // type casting void pointer to float type pointer
    ptr = &c;
    printf("void ptr points to %c\n", *((char *)ptr));// type casting void pointer to char type pointer
    
    int x, sq_int;
 	 x = 6;
  	sq_int = square(&x);
  	printf("%d squared is %d\n", x, sq_int);
  	
  	/* function pointers as an argument to another function*/
	int arr[5] = {52, 23, 56, 19, 4};
    int num, width, i;
  
    num = sizeof(arr)/sizeof(arr[0]);
    width = sizeof(arr[0]);
    qsort((void *)arr, num, width, compare); // we used function name because function name acts as a pointer
    for (i = 0; i < 5; i++)
        printf("%d ", arr[ i ]);
		    
	return 0;
}

void* square (const void *num) {
  static int result;

  result = (*(int *)num) * (*(int *)num);
  return(result);
}

int compare (const void *elem1, const void *elem2) {
    if ((*(int *)elem1) == (*(int *)elem2))
        return 0;
    else if ((*(int *)elem1) < (*(int *)elem2))
        return -1;
    else
        return 1;
} 
