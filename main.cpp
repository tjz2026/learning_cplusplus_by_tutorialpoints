#include<iostream>
#include <stdlib.h>
#include "array.h"
using namespace std;

int main(int argc, char ** argv)
{
 int m = atoi(argv[1]);
 int n = atoi(argv[2]);
 array2d arr;
 init(&arr,m,n);
 display(&arr);

return 0;
}
