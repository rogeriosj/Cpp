/**
 *  \brief Exercicio 3.2
 *  Solução do exercicio 3.2 do livro "Guide to Scietific
 *  Computing in C++", de J.Pitt-Francis e J.Whiteley.
 *
 *  \autor Rogério da Silva Sanches Jr. (UEL)
 *
 *  \version 1.0
 *
 *  \date 04/03/2020
 *
 *  contact: rogeriosanches98@gmail.com
 */

#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
  
  std::ifstream read_file("x_and_y.dat");
  if (!read_file.is_open()){
    return 1;
  }
  int number_of_rows = 0;
  while (!read_file.eof()){
    double dummy1, dummy2, dummy3, dummy4;
    read_file >> dummy1 >> dummy2;
    read_file >> dummy3 >> dummy4;
    number_of_rows++;
  }
  
  std::cout << "Number of rows = " << number_of_rows << "\n";
  read_file.close();

  return 0;
}
