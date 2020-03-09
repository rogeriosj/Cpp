/**
 * \brief Exercicio 2.6 
 * Solução do exercicio 2.6 do livro "Guide to Scientific
 * Computing in C++", de J.Pitt-Francis e J.Whiteley.
 *
 * \author Rogerio da Silva Sanches Jr. (UEL)
 *
 * \version 1.0
 *
 * \date 24/02/2020
 *
 * contact: rogeriosanches98@gmail.com
 */

#include<iostream>
#include<cmath>

int main(int argc, char* argv[]){

  int  count=0;
  double x_prev,x_next=0, ep, dif=1; // the difference between x_n and x_p is set inicially with a constant greater than epsilon
  double fun;
  double fun_d;
  bool count_dif= true;

  x_prev = 0; 
  std::cout << "Insert a epsilon: ";
  std::cin >> ep ;

  for(int i=0; i<100; i++){
    
    while (count_dif) { 
      if (x_next <= x_prev){  // check for seeing if the solutions converge for highers values of i .3

        fun = exp(x_prev) + pow(x_prev,3) - 5;
        fun_d = exp(x_prev) + 3 * pow(x_prev,2);
        x_next = x_prev - fun/fun_d;
        dif= fabs(x_next - x_prev);
        x_prev = x_next;
        count++;
          if( dif < ep){
            count_dif= false;
            std::cout << "|x_next - x_prev| < epsilon so we are ending the program bye!!\n";
            return 0;
          }
        std::cout << count <<" interacao: "  <<"\t" << x_next << "\n";
      }

    }
  }
  

  return 0;
}
