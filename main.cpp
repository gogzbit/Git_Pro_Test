#include <string.h>

#include <fstream>
#include <iostream>
#include <typeinfo>
#include <vector>

#include "./mylib.hpp"
using namespace std;

template <typename T>
inline T& func(T& var1);

int main() {
  int a = 5;
  int b = func(a);
  cout << a << endl;
  cout << b << endl;

  return 0;
}

template <typename T>
inline T& func(T& var1) {
  // T* tmp = new T;
  // T& res = *tmp;
  //  *tmp = var1 * var1;

  T& res = *(new T);
  res = var1 * var1;

  return res;
}