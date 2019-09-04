#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int digitSum(int n) {
  int sum = 0;
  while(n > 0) {
    sum += (n % 10);
    n = n / 10;
  }
  return sum;
}

int multiply(int A[], int n, int &size) {
  int carry = 0, i;
  for(i = 0; i < size; i++) {
    int product = (A[i] * n) + carry;
    A[i] = product % 10;
    carry = product / 10;
  }

  while(carry > 0) {
    A[size] = carry % 10;
    size++;
    carry = carry / 10;
  }
  return size;
}

void factorial(int n) {
  int A[500] = {0};
  A[0] = 1;
  int size = 1;

  //n! = 1 x 2 x 3 x ... x n
  for(int i = 2; i <= n; i++){
    size = multiply(A, i, size);
  }

  int sum = 0;

  //display result
  for(int i = size - 1; i >= 0; i--){
    cout << A[i];
  }
}

int main() {
  int n;
  cin >> n;
  factorial(n);
  return 0;
}
