#ifndef MY_LIB_H_
#define MY_LIB_H_
#include <iostream>
#include <ostream>

using namespace std;

namespace my_lib {

template <typename V>
void pr3();

template <typename V>
void pr4(const V& t);
// template <typename T> void pr3();

template <typename T>
class C1 {
 private:
  T item_;
  static int count_;

 public:
  C1(T item) : item_{item} { count_++; }
  ~C1() { count_--; }

  friend void pr1();
  friend void pr2(const C1<T>& t);

  friend void pr3<T>();
  friend void pr4<C1<T>>(const C1<T>& t);
};

template <typename T>
int C1<T>::count_ = 0;

void pr1();
void pr2(const C1<int>& t);

template <typename V>
void pr3() {
  cout << "for int: " << C1<V>::count_ << endl;
}

template <typename V>
void pr4(const V& t) {
  cout << "for: " << t.item_ << endl;
}
// void pr2(const C1<double>& t);

// template <typename T>
// void pr2(const C1<T>& t) {
//   cout << "for int: " << t.item_ << endl;
// }

}  // namespace my_lib

#endif