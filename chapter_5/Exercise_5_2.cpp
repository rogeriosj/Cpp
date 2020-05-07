#include <iostream>

void ChangeInt(int *a){
  *a += 5;
  std::cout << *a << "\n";
}


int main(int argc, char* argv[]){

  int i, *p_x;

  std::cout << "Insira um número inteiro: ";
  std::cin >> i;
  p_x = &i;
  ChangeInt(p_x);



  return 0;
}
