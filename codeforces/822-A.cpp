/*
   math > number theory > greatest common divisor (GCD)
   difficulty: easy
   problem: i'm bored with life
   date: 07/Jan/2020
   author: @brnpapa
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
   int a, b;
   cin >> a >> b;

   int fat = 1;
   for (int i = 2; i <= min(a, b); i++)
      fat *= i;

   cout << fat << endl;
   return 0;
}