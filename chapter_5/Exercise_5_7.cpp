#include <iostream>
#include <cmath>

double CalculateNorm(double* x, int vecSize, int p){
  double sum = 0.0;
  //loop over elems x_i ofx, incrementing sum by /x_i/**p
  for (int i=0; i<vecSize; i++){
    double temp = fabs(x[i]);
    sum += pow(temp, p);
  }
  //return p-th root of sum
  return pow(sum, 1.0/p);
}

int main(int argc, char* argv[]){

  int p=2, count; // =2 pois o exercicio pede
  double* p_x;  

  std::cout << "Insira a quantidade de elementos do seu vetor: " ;
  std::cin >> count;
  p_x= new double[count];

  for(int i=0; i<count; i++){
    std::cout << "Insira o elemento " << i+1 << " : ";
    std::cin >> p_x[i];    
  }

 std::cout <<  CalculateNorm( p_x, count, p);

  return 0;
}
