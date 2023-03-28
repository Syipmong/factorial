#include <iostream>

using namespace std;

int factorial(int n) {
  if (n == 0 || n == 1) { // base case
    return 1;
  } else {
    return n * factorial(n - 1); // recursive case
  }
}

int main() {
  int n;
  cout << "Enter an integer to calculate its factorial: ";
  cin >> n;
  cout << "Factorial of " << n << " is " << factorial(n) << endl;
  return 0;
}
