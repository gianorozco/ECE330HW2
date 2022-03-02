/* File: test_dynamic.c */
#include "matrix_dynamiclib.h"


int main() 
{
  static T data[] = {1,2,3,4};
  matrix  a,b;
  matrix output;
  a = create_initvals(2,2,data);
  b = create_empty(2,2);
  printf("\n matrix a prior to equate");
//  matrix_print(a);
  equate(&a,&b);
  printf("\n Matrix a:");
  matrix_print(a);
  printf("\n Matrix b:");
  matrix_print(b);
  printf("\n a+b:");
  output = add(a,b);
  destroy(output);
  printf("\n transpose of a and b");
//  output = create_empty(2,2);
  output = transpose(a);
  matrix_print(output);
  destroy(output);
  output = transpose(b);
  matrix_print(output);
  destroy(output);
  destroy(a);
  destroy(b);
}

