#include <stdio.h>
#include <string.h>


int main() {
	/*String declarations*/
	
	//there is no string data type in C language. It is just an array of chararters.
	char str_1[12]="this is ball"; //notice theh double quotation mmarks
	char str_2[]="this is another ball"; //notice the missing length of string
	char str_3[]={'t','h','i','s',' ','i','s',' ','b','a','l','l','\0'}; //notice ending character \0 must be added
	
	printf("%s. having length: %d\n",str_1,strlen(str_1));
	printf("%s\n",str_2);
	printf("%s\n",str_3);
	
	/*getting strings from user*/
	
	// 1.
	char f_name[20]; // length must be entered to empty array of characters i.e. strings
	int age;
	printf("Enter your first name and age\n");
	scanf("%s %d ",f_name,&age); //notice missing & with string name, because string name is itself the address to array.
	// notice the space after %d, else the fgets in code below won't get input. same can be done \n instead of space.
	printf("You entered: %s %d\n",f_name,age);
	
	// 2.
	
	char name[50];
	fgets(name,50,stdin);
	fputs(name,stdout);
	
	// 3.
	char some[100];
	printf("enter the text of your choise\n");
	scanf("%[^\n]s",some);
	printf("you entered:%s",some);
//	puts(some); // it adds newline to output

	
	
	
	return 0;
  
}

/*string functions from string.h*/
/*
strlen() - get length of a string
strcat() - merge two strings
strcpy() - copy one string to another
strlwr() - convert string to lower case
strupr() - convert string to upper case
strrev() - reverse string
strcmp() - compare two strings
*/
