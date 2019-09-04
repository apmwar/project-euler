#include <iostream>
using namespace std;

inline int sumOf(int a, int n) {
  return (n * (2 * a + (n - 1) * a))/2;
}

int main() {
  long int sum = ((100) * (101) * (201)) / 6;
  cout << sum << endl;
  long int sq = sum * sum;
  cout << sq << endl;
  cout << sq - sum;
  return 0;
}
