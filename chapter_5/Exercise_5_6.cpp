#include <iostream>
#include <cassert>

void Multiply(int row, int col, int count, double esca, double** pA, double** pB);

int main(int argc, char* argv[]){

  int escolha, rows_a, rows_b, cols_a, cols_b;
  double** A, **B;
  double escalar;

//crianmdo primeira matriz e tomando dados
  std::cout << "Programa que calcula a multiplicação entre duas matrizes, vetores e escalares!!\n";
  std::cout << "Digite 1 para fazer o produto entre matrizes e vetores!!\n";
  std::cout << "Digite 2 para fazer o produto de um escalar e uma matriz!!\n";
  std::cout << "Digite 3 para fazer o produto de uma matriz e um escalar!!\n";
  std::cin >> escolha;
  if ( escolha <= 3 || escolha >= 1){
    std::cout << "Opção invalida :( \n";
    return 1;
  }
  std::cout << "Insira o número de linhas e de colunas da primeira matriz\n";
  std::cin >> rows_a >> cols_a;

  if(escolha = 1){
    A = new double* [rows_a];
    for (int i=0; i<rows_a; i++){
      A[i] = new double [cols_a];
    }
 
    for (int i=0; i<rows_a; i++){
      for (int j=0; j<cols_a; j++){
        std::cout << "Elemento da linha: "<< i+1 << " e  coluna: " << j+1 << " :";
        std::cin >> A[i][j];
      }
    }
// criando segunda matriz e tomando dados
  std::cout << "Insira o número de linhas e de colunas da segunda matriz\n";
  std::cin >> rows_b >> cols_b;
  assert(cols_a == rows_b);

  B = new double* [rows_b];
  for (int i=0; i<rows_b; i++){
    B[i] = new double [cols_b];
  }

    for (int i=0; i<rows_b; i++){
      for (int j=0; j<cols_b; j++){
        std::cout << "Elemento da linha: "<< i+1 << " e  coluna: " << j+1 << " :";
        std::cin >> B[i][j];
      }
    }
  }
  else if ( escolha =2){
  std::cout <<"Insira um escalar: \n";
  std::cin >> escalar;

  std::cout << "Insira o número de linhas e de colunas da  matriz\n";
  std::cin >> rows_a >> cols_a;

  A = new double* [rows_a];
  for (int i=0; i<rows_a; i++){
    A[i] = new double [cols_a];
  }

    for (int i=0; i<rows_a; i++){
      for (int j=0; j<cols_a; j++){
        std::cout << "Elemento da linha: "<< i+1 << " e  coluna: " << j+1 << " :";
        std::cin >> A[i][j];
      }
    }

  }
  else {


  


  }
//aplicando funçao
  Multiply(rows_a, cols_b, escolha, escalar, A, B);

//deletando mtarriz pointer
  for (int i=0; i<rows_a; i++){
    delete[] A[i];
    }
  delete[] A;

  for (int i=0; i<rows_b; i++){
    delete[] B[i];
    }
  delete[] B;

  return 0;
}

void Multiply(int row, int col, int count, double esca, double** pA, double** pB){
  double** C;
  C = new double* [row];
  for (int i=0; i<row; i++){
    C[i]= new double [col];

  }
  if (count = 2){
// multiplicando escar por matriz
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      C[i][j] = esca *  pA[i][j];
    }
  }
  }
// multiplicando matriz por escalar
  else if (count = 3){  
    for(int i=0; i<row; i++){
      for(int j=0; j<col; j++){
        C[i][j] = pA[i][j] * esca;
      }
    }
  }
  else if(count = 1){
// multiplicando matriz por matriz
    for (int i=0; i<row; i++){
      for (int j=0; j<col; j++){
        for(int k=0; k<col; k++){
          C[i][j] += pA[i][k] * pB[k][j];
        }
      }
    }
  }
// imprimindo valores
  for (int i=0; i<row; i++){
    for( int j=0; j<col; j++){
      std::cout << C[i][j]<< " ";
      }
  std::cout << "\n";
  }

// deletando pointers
  for (int i=0; i<row; i++){
    delete[] C[i];
    }
  delete[] C;

}

