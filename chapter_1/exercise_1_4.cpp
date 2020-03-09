/* progama que declara 4 matrizes 2x2 A,B,C,D  C=A+B, D=A*B,
   IMPRIME RESULTADOS */

#include <iostream>

int main(int argc, char* argv[])
{
  double array_a[2][2], array_b[2][2], array_c[2][2], array_d[2][2];

  std::cout << "Insert four numbers for the matrix A 2x2!! \n";
  std::cin >> array_a[0][0] >> array_a[0][1] >> array_a[1][0] >> array_a[1][1] ; 

  std::cout << "Insert four numbers for the matrix B 2x2!! \n";
  std::cin >> array_b[0][0] >> array_b[0][1] >> array_b[1][0] >> array_b[1][1] ;

// making array_c
 
  array_c[0][0] = array_a[0][0] + array_b[0][0];
  array_c[0][1] = array_a[0][1] + array_b[0][1];
  array_c[1][0] = array_a[1][0] + array_b[1][0];
  array_c[1][1] = array_a[1][1] + array_b[1][1];

//making array_d

  array_d[0][0] = array_a[0][0] * array_b[0][0] + array_a[0][1] * array_b[1][0];
  array_d[0][1] = array_a[0][0] * array_b[0][1] + array_a[0][1] * array_b[1][1];
  array_d[1][0] = array_a[1][0] * array_b[0][0] + array_a[1][1] * array_b[1][0];
  array_d[1][1] = array_a[1][0] * array_b[0][1] + array_a[1][1] * array_b[1][1];

//printing array_c

  std::cout << "Matrix C is: \n";
  std::cout << array_c[0][0] << "\t" << array_c[0][1] << "\n";
  std::cout << array_c[1][0] << "\t" << array_c[1][1] << "\n";

//printing array_d

  std::cout << "\nMatrix D is: \n";
  std::cout << array_d[0][0] << "\t" << array_d[0][1] << "\n";
  std::cout << array_d[1][0] << "\t" << array_d[1][1] << "\n";


  return 0;
}
