#include <stdio.h>

union val {
  int int_num;
  float fl_num;
  char str[20]; 
};

typedef struct { // useful in structures. like in this case the vehicle canhave id_num or VIN as id but not both.
  char make[20];
  int model_year;
  int id_type; /* 0 for id_num, 1 for VIN */
  union {
    int id_num;
    char VIN[20]; 
  } id;
} vehicle;

int main() {  
  union val test;

  test.int_num = 123;
  test.fl_num = 98.76;
  strcpy(test.str, "hello");

  printf("%d\n", test.int_num);
  printf("%f\n", test.fl_num);
  printf("%s\n", test.str);
  
  /*union as member of structure*/
  
  vehicle car1;
  strcpy(car1.make, "Ford");
  car1.model_year = 2017;
  car1.id_type = 0;
  car1.id.id_num = 123098;
  
  printf("Car %s, %d\n", car1.make, car1.model_year);
  
  


  
  return 0;
}

