#include <stdio.h>


/*File extensions alone do not determine the format of data in a file,
 but they are useful for indicating the type of data to expect. For example,
 a .txt extension indicates a text file, .bin is for binary data,
  .csv indicates comma separated values, and .dat is a data file.*/


int main (){
	FILE *fptr;
	
	fptr = fopen("file.txt","w");
	if(fptr == NULL){
		printf("Could not open the specified file\n");
	}
	
	fprintf(fptr,"Iventory\n");
	fprintf(fptr,"%d %s %f\n",100,"Widget",0.92);
	fputs("End of list",fptr);
	
	
	
	if(fclose(fptr) == 0){ //closes the file and checks if closing was successful
		printf("File was successfully closed after writing.\n");
	}
	
	char filename[50];
	int c, stock;
	char buffer[50], item[10];
	float price;
	FILE *fpt;
	
	printf("enter the file name:\n");
	fgets(filename,50,stdin);
//	scanf("%s",filename);
	fpt = fopen("file.txt","r");
	if(fpt == NULL){
		printf("Could not open file");
	}
	
	fgets(buffer,20,fpt);
	printf("%s\n",buffer);
	
	fscanf(fpt, " %d %s %f",&stock, item, &price);
	
	printf("%d %s %4.2f\n",stock, item, price);
	
	while ((c = getc(fpt)) != EOF){ // feof(fpt) != 0, does same job but misses the last line of the file.
		printf("%c",c);
	}
	
		if(fclose(fpt) == 0){ //closes the file and checks if closing was successful
		printf("\nFile was successfully closed after reading.\n");
	}
	
		
	return 0;
}
