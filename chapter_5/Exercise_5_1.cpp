#include <iostream>

void PrintInteger(int *a){    //function that print the number
  std::cout << *a << "\n";
}

int main(int argc, char* arv[]){

  int i,*p_x;

  std::cout << "Insira um número inteiro para ser impresso logo em seguida! \n";
  std::cin >> i;
  p_x= &i;
  PrintInteger(p_x);

  return 0;
}
