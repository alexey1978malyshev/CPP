#include <iostream>
using namespace std;

int main() {
  int i5, i2, i1, i05, i02, i01; //переменные для хранения кол-ва купюр
  int a; //остаток набора в руб
  int x; //запрашиваемая сумма
  cin >> i5 >> i2 >> i1 >> i05>> i02 >> i01;   
  
  while (x >= 100 )
      { 
      if (x >= 5000)
        i5 = x / 5000;
        x = x - (i5 * 5000 + x % 5000);
      if (x < 5000 && x >= 2000)
        i2 = x / 2000;
        x = x - (i2 * 2000 + x % 2000);
      if (x < 2000 && x >= 1000)
        i1 = x / 1000;
        x = x - (i1 * 1000 + x % 1000);
      if (x < 1000 && x >= 500)
        i05 = x / 500;
        x = x - (i1 * 500 + x % 500);
      if (x < 500 && x >= 200)
        i02 = x / 200;
        x = x - (i02 * 200 + x % 200); 
      if (x < 200 && x >= 100)
        i01 = x / 100;
        x = x - (i01 * 100 + x % 100);

}