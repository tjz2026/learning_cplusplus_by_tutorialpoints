#include "array_class.h"
#include<iostream>
using namespace std;

//// Member functions definitions
int array2d:: get_size(void){
    return m*n;
}

void array2d:: set_size(int N1,int N2){
     m=N1;
     n=N2;

}
void array2d:: init_data(void){
    data = new double * [m];
    for ( int i=0;i<m;i++) {
     data[i] = new double [n];
     }
     for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
          data[i][j] = 0.0;
          }
           }
     cout<<"sucessfully allocate memory for data"<<endl;
}



// constructor
//array2d::array2d ( int N1,int N2){
//    cout<<"creating an array2d object"<<endl;
//    call_set_size(N1,N2);
// }

array2d::array2d ( int N1,int N2): m(N1),n(N2) {
    cout<<"creating an array2d object using parameter list"<<endl;
    init_data();   
}

// copy constructor

array2d::array2d(const array2d &obj){
 cout<<"call copy constructor"<<endl;
 // allocate memory for the pointer
    set_size(obj.m,obj.n);
    data = new double * [m];
    for ( int i=0;i<m;i++) {
     data[i] = new double [n];
    }

   // copy the data value
     for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
          data[i][j] = obj.data[i][j];
          }
           }
}


array2d::~array2d (void){
   cout<<"delete array2d object"<<endl;
    for ( int i=0;i<m;i++) {
     delete [] data[i];
     }
     delete [] data;
     if (data != NULL) {
     data= NULL;
     cout<<"done delete data"<<endl;
     }
}

int array2d:: compare(array2d * arr) {
   return this->get_size() > arr->get_size();
}










