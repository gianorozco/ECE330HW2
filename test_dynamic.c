/* File: test_dynamic.c */
#include "matrix_dynamiclib.h"


int main() 
{
  static T data[] = {1,2,3,4};
  matrix  a,b;
/* an output matrix is created as a way to print the output; prevents data leaks */
  matrix output;

  a = create_initvals(2,2,data);
  b = create_empty(2,2);
/* end of creating matrix a and b. beginning the assignment of a, b, a+b */
  equate(&a,&b);
  printf("\n Matrix a:");
  matrix_print(a);
  printf("\n Matrix b:");
  matrix_print(b);
  printf("\n a+b:");
  output = add(a,b);
  destroy(output);
/* end of assignment of a,b, a+b. beginning the transpose of a and b */
  printf("\n transpose of a and b");
  output = transpose(a);
  matrix_print(output);
  destroy(output);
  output = transpose(b);
  matrix_print(output);
  destroy(output);
/*end of transpose. Freeing memory */
  destroy(a);
  destroy(b);
}
