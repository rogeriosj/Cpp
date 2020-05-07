#include <iostream>

void ChangePointer(int a, int b, int *p_a, int *p_b){
  int c;
  c = a;
  *p_a = b;
  *p_b = c;
}

int main(int argc, char* arv[]){

  int i,j;
  int *p_i, *p_j;

  std::cout <<"Insira dois números inteiros e o comp. ira troca-los: ";
  std::cin >> i >> j;
  std::cout << i << " " << j << "\n";  // imprimindo ordem
  p_i = &i;
  p_j = &j;
  ChangePointer(i, j, p_i, p_j);
  std::cout << i <<" "<< j;   // imprimindo trocados

 return 0;
}
