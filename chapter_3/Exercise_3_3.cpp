#include <iostream>
#include <cassert>
#include <fstream>
int main(int argc, char* argv[]){

  int n; // o usuario define quantos pontos
  std::cout << "Quantos pontos? ";
  std::cin >> n;
  assert(n > 0);
  double x[n],y[n];
  std::ofstream write_output("xy.dat");
  assert(write_output.is_open());

// definindo os valores iniciais e outras quantidades

  int h;
  y[0]=1;
  x[0]=0;

  for(int i; i<n; i++){
 //   h = x[i+1] / (i+1);
    x[i+1]= (i+1) * h; 
    y[i+1] = y[i] /(1+ h);

    std::cout << x[i] << " " << y[i] << "\n";


  }
// output para o arquivo xy.dat
  for(int i; i<n; i++){
    write_output << x[i] << " " << y[i] << "\n";
  }
  write_output.close();
  return 0;
}
