#include <stdio.h>
#include <string.h>

// Student Structure Definition
struct student{
    char name[50];
    int number;
    int age;
};
typedef struct{
	float x;
	float y;
} point;

typedef struct{
	float radius;
	point center;
} circle;
typedef struct{
	int a;
	int b;
}num;
// Struct pointer as a function parameter
void showStudentData(struct student *st) {
    printf("\nStudent:\n");
    printf("Name: %s\n", st->name);
    printf("Number: %d\n", st->number);
    printf("Age: %d\n", st->age);
}

/*
void show_circle(struct circle *lol){
    printf("\cirlce:\n");
    printf("radius: %d\n", lol->radius);

}
*/
void show_number(num *nu){
	printf("\n%d\n",nu->a);
	printf("\n%d\n",nu->b);
}

void show_circle(circle *c){
	printf("\ncircle is\n");
	printf("radius is %4.2f, center is x:%4.2f, y:%4.2f\n",c->radius,c->center.x,c->center.y);
}
int main() {
    // New Student Record Creation
    struct student st1;
    struct student st2;
    
    num number={1,2};
    show_number(&number);
    
    circle c1,c2={3.0,{2,2}};;
	c1.radius = 3;
	c1.center.x=2.5;
	c1.center.y=2.5;
    printf("radius is %4.2f, center is x:%4.2f, y:%4.2f\n",c1.radius,c1.center.x,c1.center.y);
    printf("cirlce display through function\n");
    show_circle(&c2);
    
    // Filling Student 1 Details
 
    // Filling Student 2 Details
/*    strcpy(st2.name, "Max");
    st2.number = 9;
    st2.age = 15;
	
    // Displaying Student 2 Details
    showStudentData(&st2); */
    
    return 0;
}
