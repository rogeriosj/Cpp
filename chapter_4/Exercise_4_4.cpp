#include <iostream>

int main(int argc, char* argv[]){

  int rows = 2 , cols = 2;
  double A[2][2],B[2][2];
  double** p_A,** p_B, **C;
// inserindo os valores da matriz A
  for (int i=0; i<rows; i++){
    for (int j=0; j<cols; j++){
      std::cout << "Insira o valor da matrix A["<< i+1 <<"]["<< j+1 << "]:  ";
      std::cin >> A[i][j];
    }
  }

// inserindo os valores da matriz B
  for (int i=0; i<rows; i++){
    for (int j=0; j<cols; j++){
      std::cout << "Insira o valor da matrix B["<< i+1 <<"]["<< j+1 << "]:  ";
      std::cin >> B[i][j];
    }
 }

  for(int k=0; k<1e+09; k++){
// criando os pointers e transferindo valores
   p_A = new double* [rows];
    for (int i=0; i<rows; i++){
     p_A[i] = new double [cols];
    }

    for (int i=0; i<rows; i++){
      for (int j=0; j<cols; j++){
        p_A[i][j] = A[i][j];
      }
    }

    p_B = new double* [rows];
    for (int i=0; i<rows; i++){
      p_B[i] = new double [cols];
    }

    for (int i=0; i<rows; i++){
      for (int j=0; j<cols; j++){
      p_B[i][j] = B[i][j];
      }
    }

    C = new double* [rows];
    for (int i=0; i<rows; i++){
      C[i] = new double [cols];
    } 

    for (int i=0; i<rows; i++){
      for (int j=0; j<cols; j++){
        C[i][j] = p_A[i][j] + p_B[i][j];
      }
    }

/*  std::cout << " A matriz C é: \n";

  for (int i=0; i<rows; i++){
    for (int j=0; j<cols; j++){
      std::cout << C[i][j] << " ";
    }
    std::cout << "\n";
  } */
// deletando as matrizes

    for (int i=0; i<rows; i++){
      delete[] p_A[i];
    }
    delete[] p_A;

    for (int i=0; i<rows; i++){
      delete[] p_B[i];
    }
    delete[] p_B;

    for (int i=0; i<rows; i++){
      delete[] C[i];
    }
    delete[] C;
  }
  std::cout << "Loop realizado com sucesso. \n";
  return 0;
}
