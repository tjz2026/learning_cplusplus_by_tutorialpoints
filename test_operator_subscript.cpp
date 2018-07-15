#include<iostream>

using namespace std;

class Array 
{
     private: int *p;
     public:
          int length;
          Array(int size = 0): length(size)
          {
                p=new int(length);
          }
          int& operator [](const int k)
          {
               return p[k];
          }
};
class Matrix
{
      private: Array *p;
      public: 
            int r,c;
            Matrix(int i=0, int j=0):r(i), c(j)
            {
                  p= new Array[r];
                 
            }
            // Array& operator [](const int& i)
            Array& operator [](const int i)
            {
                 return p[i];
            }

            int& operator() (const int i,const int j)
             {
                return p[i][j]; 
             }

};

/*Driver program*/
int main()
{
    Matrix M1(3,3); /*for checking purpose*/
    M1[2][2]=5;
    cout<<"matrix referenced by [][] "<<M1[2][2]<<endl;   
    cout<<"matrix referenced by (2,2) "<<M1(2,2)<<endl;   
}
