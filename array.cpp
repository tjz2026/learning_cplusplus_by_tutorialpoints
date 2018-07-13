#include "array.h"
#include<iostream>

void init( array2d *arr, int m,int n)
{

  arr->m = m;
  arr->n = n;
  arr->data = new double *[arr->m]; 
  for (int i=0;i<arr->m;i++)
{  arr->data[i] = new double[arr->n];
}
  for (int i=0;i<arr->m;i++) {
    for (int j=0;j<arr->n;j++) {
         arr->data[i][j] = 0.0;
   }
 }

}

void display(array2d *arr)
{
 std::cout<<"array dimension:("<<arr->m<<","<<arr->n<<")"<<std::endl;
}








