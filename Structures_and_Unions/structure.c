#include <stdio.h>
#include <string.h>

//1.
struct course {
	int id;
	char title[50];
	float hours;
	};
	
//2.
typedef struct{
	int id;
	char title[50];
	float hours;
	char dep[40];	
} subject;
//3.
struct some{
	int a;
	int b;
} some_number;

int main(){
	

	
	//1.	
	struct course c1 = {
		101,
		"Intro to intro",
		34.2
	};
	// 2.
	struct course c2;
	
	c2 = (struct course) {    // in this manner the data must be type casted first 
		102,
		"intro to exit",
		39.2
		};
		
	// 3.
		struct course c3;
	
	c2 = (struct course) {    // in this manner the data must be type casted first 
		.hours =32.3,
		.title="intro to exit again",
		.id=103
		};
		
	struct course c9;
	
	c9 =(struct course){
		.hours = 39,
		.title = "what the ",
		.id = 193};
	
	//4.
	struct course c4;
	c4=c3;
	
	//5.
	struct course c5;
	c5.id=201;
	c5.hours=12.2;
	strcpy(c5.title,"Advanced introduction"); //string assignment requires strcpy function from string.h library
	
	//6.
	subject c6;
	
	printf("%d , %4.2f, %s\n %d",c5.id,c5.hours,c5.title,sizeof(c5));
	
	some_number.a=3;
	some_number.b=9;
	

	return 0;
}
