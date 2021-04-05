#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char title[40];
    float hours; 
} course;

typedef struct {
  int h;
  int w;
  int l;
} box;

void update_course(course *clas); // to change structure content pointer paramters are required
void display_course(course clas); // to display structure content only stucture  is required

int main() {
    course cs2;
    update_course(&cs2);
    display_course(cs2);
    
    /*array of structures*/
    box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
  	int k, volume;
  
  	for (k = 0; k < 3; k++) {
    	volume = boxes[k].h*boxes[k].w*boxes[k].l; // index is used to access a particular structure in an array
    	printf("box %d volume %d\n", k, volume);  // continued, then . operator is used to access members of that structure
  	}
    
    
    return 0;
}

void update_course(course *clas) {
    strcpy(clas->title, "C++ Fundamentals");
    clas->id = 111;
    clas->hours = 12.30;
}

void display_course(course clas) {
    printf("%d\t%s\t%3.2f\n", clas.id, clas.title, clas.hours);
} 
