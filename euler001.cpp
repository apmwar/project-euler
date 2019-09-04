#include <iostream>
using namespace std;

inline int sumOf(int a, int n) {
  return (n * (2 * a + (n - 1) * a))/2;
}

int main() {
  //sum of AP is (n/ 2) * ( 2 * a  + (n - 1) * d)
  //here, a = d
  cout << sumOf(3, 1000 / 3) + sumOf(5, 995/5) - sumOf(15, 1000/15);
  return 0;
}
