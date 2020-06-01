#include <iostream>
#include <cmath>

int determinant(int n, int A);

int main(int agrc, char* argv[]){
  int N;
  
  std::cout <<" Digite o tamano da matriz: ";
  std::cin >> N;
  int A[N][N];
  /*A = new int* [N];
  for (int i=0; i<N; i++){
    A[i] = new int [N];
  }*/
    for (int i=0; i<N; i++){
      for (int j=0; j<N; j++){
        std::cout << "Elemento da linha: "<< i+1 << " e  coluna: " << j+1 << " :";
        std::cin >> A[i][j];
      }
    }

  std::cout << "O determinante é: "  << determinant(N,A[N][N]) << "\n"; 
/* deletando pointer
  for (int i=0; i<N; i++){
     delete[] A[i];
       }
  delete[] A;*/


  return 0;
}

int determinant(int n, int A){
  int det = 0;
  int B[n][n] ;
 /* B = new int* [n];
  for (int i=0; i<n; i++){
    B[i] = new int [n];
  }*/
// caso de 1 elemento
  if ( n == 1){ 
    return  (A[0][0]);
  }
  else if ( n == 2){ // caso de matriz 2x2
    return (( A[0][0] * A[1][1]) - ( A[1][0] * A[0][1]));
  }
  else {  
    for(int i=0; i< n; i++){
      int subj = 0;
      int subi= 0 ;
      for(int j=1;j< n; j++){
        for(int k=0; k<n; k++){
          if(k == i)
          continue;
          B[subj][subi] = A[j][k];
          subi++;
        }
        subj++;
      }
      det += ( (int) (pow(-1, i) *( A[0][i]) * determinant( n - 1, B[subj][subi])) );
    }
  }
/*deletando pointers
   for (int i=0; i<n; i++){
       delete[] B[i];
       }         
   delete[] B;*/

  return  det;
}
