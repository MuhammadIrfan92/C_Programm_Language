#include<stdio.h>

int main(){
	
	// 1.
	/*sprintf: A formatted string can be created with the sprintf() function. This is useful for building a string from other data types*/
	char info[100];
  	char dept[ ] = "HR";
  	int emp = 75;
  	sprintf(info, "The %s dept has %d employees.", dept, emp);
  	printf("%s\n", info);
  	
  	//2.
  	/* sscanf:  The function reads values from a string and stores them at the corresponding variable addresses. */
  	char inf[ ] = "Snoqualmie WA 13190";
	char city[50];
	char state[50];
	int population;
	sscanf(inf, "%s %s %d", city, state, &population);
	printf("%d people live in %s, %s.\n", population, city, state);
	
	strcat(dept,state);
	printf("lol %s\n",dept);
	
	/*string to integer conversion*/
	
	// int atoi ASCII to integer
	// double atof ASCII to float
	// long int atol ASCII to long integer
	
	char num[10]="1234";
	int number= atoi(num);
	printf("%d\n",number);
	
	/* array of pointers for related strings */
	
	char *trip[]={   // can enter or omit limit
	"suitcase lol",
	"passport",
	"ticket"};
	
	int i =0;
	
	for (i=0;i<3;i++){
		printf("%s\n",trip[i]);
	}
	
	return 0;
}

/*string functions from string.h*/
/*
strlen() - get length of a string

strcat() - merge two strings. strcat(str1, str2) Appends (concatenates) str2 to the end of str1 and returns a pointer to str1.
strncat(str1, str2, n) Appends (concatenates) first n characters of str2 to the end of str1 and returns a pointer to str1.

strcpy() - copy one string to another. strcpy(str1, str2) Copies str2 to str1. This function is useful for assigning a string a new value.
strncpy(str1, str2, n) Copies the first n characters of str2 to str1.

strlwr() - convert string to lower case
strupr() - convert string to upper case
strrev() - reverse string

strcmp() - compare two strings. strcmp(str1, str2) Returns 0 when str1 is equal to str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.
strncmp(str1, str2, n) Returns 0 when the first n characters of str1 is equal to the first n characters of str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.

strchr(str1, c) Returns a pointer to the first occurrence of char c in str1, or NULL if character not found.
strrchr(str1, c) Searches str1 in reverse and returns a pointer to the position of char c in str1, or NULL if character not found.

strstr(str1, str2) Returns a pointer to the first occurrence of str2 in str1, or NULL if str2 not found.
*/
