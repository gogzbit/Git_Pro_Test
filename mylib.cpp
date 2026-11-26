#include "./mylib.hpp"

#include <iostream>

using namespace std;

namespace my_lib {

void pr1() {
  cout << "for int: " << C1<int>::count_ << endl;
  cout << "for double: " << C1<double>::count_ << endl;
}

void pr2(const C1<int>& t) {
  cout << "for int: " << t.item_ << endl;
  ;
}

void pr2(const C1<double>& t) {
  cout << "for int: " << t.item_ << endl;
  ;
}

}  // namespace my_lib