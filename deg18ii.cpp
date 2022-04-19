//Fibonacci Series using Iteration
#include<iostream.h>
void fib(int num) {
   int x = 0, y = 1, z = 0;
   for (int i = 0; i < num; i++) {
      cout << x << " ";
      z = x + y;
      x = y;
      y = z;
   }
}
int main() {
   int num;
   cout << "Enter the number : ";
   cin >> num;
   cout << "\nThe fibonacci series : " ;
   fib(num);
   return 0;
}

