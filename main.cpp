#include <iostream>
using namespace std;

// Za uneseni cijeli broj x treba ispisati pretposljednju cifru tog broja, x mora biti veći od 9!

int main() {
  int x, cifra;

  cout<< "Unesite neki višecifreni broj:"<<endl;
  cin>> x;
  
  cifra = (x % 100)/10;

  cout<<"Pretposljedna cifra je "<< cifra << endl;

return 0;
}