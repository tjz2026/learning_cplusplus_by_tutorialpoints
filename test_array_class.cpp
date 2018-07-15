#include<iostream>
using namespace std;
#include "array_class.h"

int main(){

// use member function
int m = 10;
int n = 8;
array2d arr(m,n);
cout<<"Size of arr: "<<arr.get_size()<<endl;
array2d arr2 = arr; // This  calls copy constructor
cout<<"compare arr and arr2:"<<arr.compare( &arr2)<<endl;
arr(3,4) = 10.0;
cout<<"arr(3,4)= "<<arr(3,4)<<endl;

return 0;
}
