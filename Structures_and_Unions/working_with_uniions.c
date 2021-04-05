#include <stdio.h>
#include <string.h>

union val {
  int int_num;
  float fl_num;
  char str[20]; 
};

union id {
  int id_num;
  char name[20]; 
};

union type {
  int i_val;
  float f_val;
  char ch_val;
};

void set_id (union id *item); // to change union content pointer paramters are required
void show_id (union id item); // to display union content only union  is required

int main() {  
  union val info;
  union val *ptr = NULL;
  ptr = &info;
  ptr->int_num = 10;
  printf("info.int_num is %d\n", info.int_num);
  
  union id item;
  
  set_id(&item);  
  show_id(item);
  
  
  /*array of unions; array stores values of same data type. in this case array can store values of different data types*/
  union type arr[3];
  arr[0].i_val = 42;
  arr[1].f_val = 3.14;
  arr[2].ch_val = 'x';
  printf("1st element is %d, 2nd is %f, and the 3rd is %c", arr[0].i_val, arr[1].f_val, arr[2].ch_val);
  
  
  return 0;
}


void set_id(union id *item) {
    item->id_num = 42;
}

void show_id(union id item) {
    printf("ID is %d\n", item.id_num);
}
