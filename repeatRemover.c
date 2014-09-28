#include<stdio.h>
#include<stdlib.h>

int * remover(int a[], int length, int *op_length){
  int *op = (int *)malloc(sizeof(int)*length);
  int mask = 0;
  int i=0;
  int j=0;
  for (;i<length;i++) {
    int t = 1;
    t = t << a[i];
    if(mask & t) {
      continue;
    } else {
      op[j] = a[i];
      mask = mask | t;
      j++;
    }
  }
  *op_length = j;
  return op;
}

int main(){
  int a[] = {10000,10000,10000,65548,65548};
  int length = 5, i;
  int op_length = 0;
  int *op = remover(a, length, &op_length);
  printf("Trimmed array is ");
  for(i=0; i<op_length; i++) {
    printf("%d ", op[i]);
  }
}

