#include <iostream>

int main(int argc, char* argv[]){

  int i;
  int* p_j;
  int* p_k;

  i = 5;
  p_j = &i;
 *p_j*= 5;
  p_k = new int;
  p_k = &i;

  std::cout << *p_j << " "<< *p_k;
  return 0;
}
