// Lab_03_2.cpp_
// Лунга Любов
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 14

#include <iostream>
using namespace std;
int main() {
  double a;
  double b;
  double c;
  double x;
  double F;
  
  cout << a << " a = ";
  cin >> a;
cout << b << " b = ";
  cin >> b;
cout << c << " c = ";
cin >> c;
cout << x << " x = ";
cin >> x;
// 1 спосіб
if (x + c < 0 && a != 0)
  F = -a * x * x - b;
else if (x + c > 0 && a == 0)
  F = (x - a) / (x - c);
else
  F = x / c + c / x;

cout << " F = " << F << endl;

// 2 спосіб
if (x + c < 0 && a != 0) {
  F = -a * x * x - b;
 }

 if (x + c > 0 && a == 0) {
   F = (x - a) / (x - c);
   }

   if (!(x < 0 && b != 0) && !(x > 0 && b == 0)) {
       F = x / c + c / x;
}

cout << " F = " << F << endl;
cin.get();
      return 0;
}

