/**
* \brief Exercicio 3.1 
* Solução do exercicio 3.1 do livro "Guide to Scientific
* Computing in C++", de J.Pitt-Francis e J.Whiteley.
*
* \author Rogerio da Silva Sanches Jr. (UEL)
*
* \version 1.0
*
* \date 04/03/2020
*
* contact: rogeriosanches98@gmail.com
*/



#include <cassert>
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
  double x[4] = {0.0, 1.0, 1.0, 0.0};
  double y[4] = {0.0, 0.0, 1.0, 1.0};
  std::ofstream write_output ("x_and_y.dat");
  assert(write_output.is_open());

  std::ofstream write_file("x_and_y.dat");
  write_file.setf(std::ios::scientific);
  write_file.setf(std::ios::showpos);
  write_file.precision(9);

  for( int i=0; i<4; i++){
    write_file << " " << x[i]; //for the corrections i changed write_output for write_file
    write_output.flush();
  }
  write_file <<"\n";
  for( int i=0; i<4; i++){
    write_file << " " << y[i];
    write_output.flush();
  }
  
  write_output.close();
  return 0;
}
