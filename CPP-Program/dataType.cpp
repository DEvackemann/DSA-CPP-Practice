#include <iostream>
using namespace std;
int main() {
  int a=123;
  cout << a<< endl;
  char b='f';
  cout << b << endl ;
  bool c = true;
  cout<< c << endl;
  float d = 1.2;
   cout<< d << endl;
  double e= 1.24;
  cout<< e << endl;
  int size = sizeof(a);
  cout<< "size of a is :"<< size << endl;
  int size2 = sizeof(b);
  cout<< "size of b is :"<< size2 << endl;
  return 0;
}