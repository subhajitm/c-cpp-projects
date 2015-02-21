#include<iostream>

using namespace std;

int main() {
  char str[10];
  size_t sl = sizeof(int);
  cout << sl << endl;

  int *p;
  int x = 10;
  p = &x;

  cout << sizeof(p);
  
  return(0);
}
