/*
   ad-hoc | basic
   problem: unraveling monty hall
*/
#include <iostream>
using namespace std;

int main() {
   int n, numPortaComCarro, vezesGanhou = 0;
   cin >> n;
   for (int i = 0; i < n; i++) {
      cin >> numPortaComCarro;
      if (numPortaComCarro == 2 || numPortaComCarro == 3)
         vezesGanhou++;
   }
   cout << vezesGanhou << endl;
   return 0;
}