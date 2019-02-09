
#include <iostream>

#include <boost/function.hpp>

int print(const int &a, const int &b) {
  std::cout << a + b << std::endl;
  return a + b;
}

int main() {

  int a = 1;
  int b = 10;
  boost::function<int(const int &, const int &)> f =
      boost::function<int(const int &A, const int &B)>(
          [a, b](const int &A, const int &B) {
            print(a, b);
            print(A, B);
            return 0;
          });

  f(10, 10);

  return 0;
}
