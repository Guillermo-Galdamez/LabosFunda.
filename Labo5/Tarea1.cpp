#include <iostream>
using namespace std;
int mcd(int a , int b){
  int t;
  a = (a < 0) ? -a:a;
  b = (b < 0) ? -b:b;
  t = (a < b) ? a : b;
  while ( (a % t) || (b % t))
    --t;
  return t;
}

int main()
{
  int a,b;
  cout << "Ingrese primer numero: ";
  cin >> a;
  cout << "Ingrese segundo numero: ";
  cin >> b;  
  cout << "MCD: " << mcd(a,b) << endl;
  
}