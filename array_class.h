#ifndef Array_H
#define Array_H

class array2d {
      int m;
      int n;
      double ** data;
      void set_size(int N1,int N2);
      private:
      void init_data(void);
      public:
      array2d (int N1,int N2);
      array2d(const array2d &obj); // copy constructor
      ~array2d (void);
      int get_size (void);
      int compare(array2d * arr);
      double & operator () (const int i,const int j);
};






#endif
