#include <stdio.h>

int main (){
	
	
	/*Writing only characters and strings to a file can become tedious when you have an array or structure. 
	To write entire blocks of memory to a file, there are the following binary functions*/
	
	/*Binary files are useful for storing large amounts of data in smaller file sizes*/
	
	
	FILE* fptr;
	int arr[10];
	int x[10];
	int k;
	
	for ( k =0; k<10;k++)
	arr[k]=k;
	/*writing to a binary file*/
	fptr = fopen("file.bin","wb");
	if(fptr == NULL){
		printf("Could not open file");
	}
	fwrite(arr,sizeof(arr[0]),sizeof(arr)/sizeof(arr[0]),fptr);
	
	if (fclose(fptr) == 0){
		printf("file was closed after writing\n");
	}
	/*reading from a binary file*/
	fptr = fopen("file.bin","rb");
	if(fptr == NULL){
		printf("Could not open file");
	}
	fread(x,sizeof(arr[0]),sizeof(arr)/sizeof(arr[0]),fptr);
	
		if (fclose(fptr) == 0){
		printf("file was closed close after reading\n");
	}
	
	return 0;
	
}
