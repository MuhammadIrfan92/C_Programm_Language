#include <stdio.h>
#include <string.h>

int main(){
	int a;
	scanf("%d",&a);
	printf("%d\n",a);
	getchar(); // to ignore the new line element in buffer caused by scanf
	char s[100];
	gets(s);
	puts(s);
	
	char ss[100];
	fgets(ss,100,stdin);
	fputs(ss,stdout);
	
/*Escape sequences begin with a backslash \:
\n new line
\t horizontal tab
\\ backslash
\b backspace
\' single quote
\" double quote */

	/* arithmetic operators precedence, * / % + - from left to right*/
	return 0;
}
