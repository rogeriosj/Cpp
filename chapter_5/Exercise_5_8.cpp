#include <iostream>
#include <cmath>

double determinant(int n, double** A);

int main(int agrc, char* argv[]){





  return 0;
}

double determinant(int n, double** A){
  double det = 0;

  for(int i=0; i<= n; i++){
    det += pow(-1, i) * A[0][i] * determinant ( B, n-1);

  }

}
