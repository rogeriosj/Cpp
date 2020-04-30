#include <iostream>

int main(int argc, char* argv[]){
  
  double x[3], y[3];
  double* p_k;
  double* p_x, *p_y;
  p_x = new double [3];
  p_y = new double [3];

  std::cout <<"Insira 3 valores para o vetor x: \n";
  std:: cin >> x[0] >> x[1] >> x[2];
  std::cout <<"Insira 3 valores para o vetor y: \n";
  std::cin >> y[0] >> y[1] >> y[2];

  for (int j=0; j<1e+09; j++){	// começo do loop

    for(int i=0; i<3; i++){
      p_x[i] = x[i];
      p_y[i] = y[i];

    }
    for (int i=0; i<3; i++){
     p_x[i] = ((double)(i));
     p_y[i] = 7.0 * p_x[i];
    }
//-------------- calculo do produto escalar
    p_k = new double;
    *p_k = 0;
    for (int i=0; i<3; i++){
      *p_k += p_x[i]*p_y[i];
    }
    delete [] p_x;
    delete [] p_y;
    delete [] p_k;
  }
  std::cout << "Loop realizado com sucesso :D!! \n";
  return 0;
}
