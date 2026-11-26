#include <iostream>
#include <vector>



#include "./mylib.hpp"

// extern int my_lib::MyClass::count_;

using namespace my_lib;
using namespace std;

template <typename T>
using myvec = std::vector<T>;

int main() {
  //
  //
  cout << "---" << endl;
  C1<int> c1(-1);
  pr1();
  pr2(c1);

  cout << "---" << endl;
  C1<double> c2(-2);
  pr1();
  pr2(c2);

  cout << "---" << endl;
  C1<short> c3(0);
  pr1();
  pr3<short>();
  pr4(c3);

  myvec<int> t1;
//   t1.

  

  return 0;
}