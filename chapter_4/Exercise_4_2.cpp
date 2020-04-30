#include <iostream>

int main(int argc, char* argv[]){

  int i,j;
  int* p_i;
  int* p_j;

  i = 7;
  j = 3;
  p_i = &i;
  *p_i = j;
  p_j = &j;
  *p_j = 7;

  std::cout << i << " " << j;

  return 0;
}
