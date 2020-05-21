#include <iostream>

void ChangePointer(int a, int b, int *p_a, int *p_b){
  int c;
  c = a;
  *p_a = b;
  *p_b = c;
}

void ChangeRef(int& x, int& y){
  int z;
  z = x;
  x = y;
  y = z;
}

int main(int argc, char* arv[]){

  int i,j;
  int *p_i, *p_j;

  std::cout <<"Insira dois números inteiros e o comp. ira troca-los: ";
  std::cin >> i >> j;
  p_i = &i;
  p_j = &j;
  ChangePointer(i, j, p_i, p_j);  // as duas funçoes não funcionam juntas 
  std::cout <<"trocando usando pointers: "  << i <<" "<< j << "\n";   // imprimindo trocados

  ChangeRef(i,j);  // essa função vai trocar os valores trocados por pointers de volta para o original
  std::cout << "Trocando utilizando reference variables: "<< i << " " << j; 

 return 0;
}
