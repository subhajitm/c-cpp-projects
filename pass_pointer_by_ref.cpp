#include<iostream>

using namespace std;

void func(int* &p);

int main() {
  int a = 2;
  int *pt;

  pt = &a;

  cout << "before func call "<< *pt << endl;
  cout << "address pf pt before call "<<pt<<endl;
  func(pt);
  cout << "address of pt after call "<<pt<<endl;
  cout << "After func call "<<*pt;
  return 0;
}

void func(int* &p) {
  *p = 3;
}
