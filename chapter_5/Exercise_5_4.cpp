#include <iostream>
#include <cmath>

void DesvioP(int a, double b, double* pvalores){
  double* numerador, *dife, numerador_soma=0, desvio;
  numerador = new double [a];
  dife = new double [a];

  for(int j=0; j<a;j++){
    dife[j]= fabs(pvalores[j] - b);
    numerador[j]= pow (dife[j], 2);
  }
  for(int i=0; i<a; i++){
  numerador_soma += numerador[i];
  }
  desvio = sqrt( numerador_soma / (a - 1) );

  std::cout <<" O desvio padrão é: " << desvio << "\n";

  delete [] numerador;
  delete [] dife;
}


int main(int argc,char* argv[]){

  double* p_x;
  int n;
  double media=0;


  std::cout << "Programa que calcula o desvio padrão \n";
  std::cout << "Insira o número de medidas: ";
  std::cin >> n;
  p_x = new double [n];

  for(int i=0; i<n; i++){
    std::cout << i+1  <<" valor: " ;
    std::cin >> p_x[i];
    media+=p_x[i];
  }
  media/= n;
  DesvioP(n, media, p_x);

  delete [] p_x;
  

  return 0;
}
