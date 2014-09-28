#include<iostream>
#include<vector>

using namespace std;

class RepeatRemover {
  private:
    vector<int> op;
  public:
    RepeatRemover(){
    //  op = new vector<int>();
      cout << "Constructor" << endl;
    }
    void remover(int a[], int length) {
      int mask = 0;
      int i;
      for (i=0; i<length; i++) {
        int t = 1;
        t = t << a[i];
        if(mask & t) {
          continue;
        } else {
          op.push_back(a[i]);
          mask = mask | t;
        }
      }
    }
    void print_vector(){
      vector<int>::iterator it;
      for(it = op.begin() ; it != op.end(); ++it) {
        cout << *it << " ";
      }
    }
};

int main(){
  RepeatRemover rr;
  int a[] = {1000,1000,65548,684784,684784};
  int length = 5;
  rr.remover(a, length);
  rr.print_vector();
  return 0;
}

