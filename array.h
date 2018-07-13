#ifndef Array_H
#define Array_H

typedef struct array2d 
{
 int m;
 int n;
 double ** data; // new double *[m]; 
}array2d;

void init( array2d * arr, int m,int n);
void display(array2d * arr);


#endif
