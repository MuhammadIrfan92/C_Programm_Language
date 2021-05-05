#include <stdio.h>
#include <string.h>

typedef struct {
  int id;
  char name[20];
} item;


/*File extensions alone do not determine the format of data in a file,
 but they are useful for indicating the type of data to expect. For example,
 a .txt extension indicates a text file, .bin is for binary data,
  .csv indicates comma separated values, and .dat is a data file.*/


int main() { 
  FILE *fptr;
  item first, second, secondf;

  /* create records */
  first.id = 10276;
  strcpy(first.name, "Widget");
  second.id = 11786;
  strcpy(second.name, "Gadget");
  
  /* write records to a file */
  fptr = fopen("info.csv", "wb");
  fwrite(&first, 1, sizeof(first), fptr); // reading from pointer &first, and writing to pointer fptr
  fwrite(&second, 1, sizeof(second), fptr);
  fclose(fptr); 

  /* file contains 2 records of type item */
  fptr = fopen("info.csv", "rb");

  /* seek second record */
  fseek(fptr, 1*sizeof(item), SEEK_SET); // fseek(fptr, num_bytes, from_pos) 
  fread(&secondf, 1, sizeof(item), fptr);
  printf("%d  %s\n", secondf.id, secondf.name);
  fclose(fptr);
  return 0;
}
