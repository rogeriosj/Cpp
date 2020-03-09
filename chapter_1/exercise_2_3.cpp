/**
 * \brief Exercicio 2.3 
 * Solução do exercicio 2.3 do livro "Guide to Scientific
 * Computing in C++", de J.Pitt-Francis e J.Whiteley.
 *
 * \author Rogerio da Silva Sanches Jr. (UEL)
 *
 * \version 1.0
 *
 * \date 18/02/2020
 *
 * contact: rogeriosanches98@gmail.com
 */

#include <iostream>

int main(int argc, char* argv[]){

  int i=0, a=0 , number=0;
  double med;
  bool count= true;

  std::cout << "Enter a integer number followed by RETURN, if you want to stop type -1:\n";

  while (count){// main block to sum numbers
    std::cin >> number;    
    if(number == -1){
      count= false;
    }
    else if ( number > -1){
      i++;
      a += number;
      if( a >= 100){
        count = false;
      } 
    }
    else{
      a = 0;
      i = 0;
      std::cout << "The sum was reseted!! \n";
    }
  } 

  if( i!=0 ){ // now print result
    med = ( (double) (a) ) / ( (double) (i) );
    std::cout << "A média é: " << med << std::endl;
  }
  else std::cout << "No number entered, bye!\n"; 

  return 0;
}
