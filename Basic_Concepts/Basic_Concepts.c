#include <stdio.h>

#define PIE 3.1415  // preprocessor directive, doesn't uses memory

int main(){

	
	/*Data types*/
	printf("Hello World\n"); // use doubel quotes for strings in printf statement
	printf("Size of int:%ld\n",sizeof(int)); // % is the "format specifier" for long integer
	printf("Size of float:%ld\n",sizeof(float));
	printf("Size of double:%ld\n",sizeof(double));
	printf("Size of char:%ld\n",sizeof(char));
	
	//char - %c - 1 byte ( the lowest) 
//	short int - %hi - 2 bytes 
//	unsigned short int - %hu - 2 bytes 
//	INT AND LONG INT TYPES(signed and unsigned) OCCUPY 4 BYTE 
//	int/signed int - %d or %i unsigned int - %u long signed int - %ld or %li long unsigned int - %lu 
	/*now to float variants*/ 
///	FLOAT OCCUPY 4 BYTES 
//	DOUBLE OCCUPY 8 BYTES 
//	LONG DOUBLE - 10 BYTES f
//	loat - %f double - %lf long double - %ld
	
	/*Variables*/
	int a = 5, b =8,c,g;
	c = a + b;
	float d = 9.7,f;
	char e = 'e'; // notice that single quotes are used to define a character

	
	printf("Value of c is:%d\n",c);
	printf("Value of d is:%f\n",d);
	printf("Value of e is:%c\n",e);
	
	g = c + d;
	f = c + d;
	//integer and floats can be operated together the final answer type depends upon the type of result variable.
	printf("Value of g:%d\n",g); //holds answer in integer form, if format specifier f is used for interger gives 0.0000
	printf("Value of h:%f\n",f); //holds anser in float form , if format specifier d is used for float gives the address of variable i guess
	
	/*Constants*/
	const double PI = 3.14; //uses memory
	printf("Value of PI is:%f\n",PI);
	printf("Value of PIE is:%f",PIE);
	
	/*Inputs & Outputs*/
	char character;
	char ss[1000];
	int aa,bb;
	printf("Character\n");
	character = getchar();
	putchar(character);
	printf("\n");
	printf("\nString\n");
	fgets(ss,100,stdin); //compiler dependent i guess
	printf("\nYou entered strings:\n");
	fputs(ss,stdout);
	printf("Entered string is:%s",ss);
	printf("\nscanf\n");
	scanf("%d %d",&aa,&bb); // notice the address operator
	printf("Ans:%d\n",aa+bb);
	/*Alternate way to take string as an input*/  //compiler dependent i guess
	char s[100];
	scanf("%[^\n]%*c",&s);
	printf("\nYOu entered this string:%s",s);
	
	/*More on format specifiers*/
	
	int in;
	float fl;
	char charc;
	char stri[100];
//	scanf("%d %f %c %s",&in,&fl,charc,stri);
//	printf("You entered following data:\n");
//	printf("%d %f %c %s",in,fl,charc,stri);
	int x, y;
    char text[20];

    scanf("%2d\n %d\n %f\n %5s ", &x, &y,&fl, text);
    /* input: 1234  5.7  elephant */
    printf("%d  %d %f %s\n", x, y,fl, text);
    /* output: 12  34  eleph */
    printf("\n");
    getchar();
    char yo[100] = "this is a test\n";
	char yolo[100];
	printf("Enter yolo:\n");
	gets(yolo);
	puts(yolo);
	puts(yo);
	

	
	
	return 0;
}
