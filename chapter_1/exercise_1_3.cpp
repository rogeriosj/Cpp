/* Write code that declares two vectors as arrays of double precision floating point
   numbers of length 3 and assigns values to each of the entries. Extend this code so
   that it calculates the scalar (dot) product of these vectors and prints it to screen.
   Finally, extend the code so that it prints the Euclidean norm of both vectors to screen.
   [See Sect. A.1.2 for a definition of the scalar product, and Sect. A.1.5 for a definition
   of the Euclidean norm of a vector.] */

#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
  double vet1[3] = {1, 1, 2} , vet2[3] = {3, 4, 5}, norm1 , norm2 ;

  norm1= pow(vet1[0], 2) + pow(vet1[1], 2) + pow(vet1[2], 2) ;
  norm2= pow(vet2[0], 2) + pow(vet2[1], 2) + pow(vet2[2], 2) ;

  std::cout <<"The scalar product is (" << vet1[0] * vet2[0] <<" ,  " << vet1[1] * vet2[1] << " , " << vet1[2] * vet2[2] << ")\n" ;
  std::cout <<"The Euclidian norm of vector one is: " << sqrt(norm1) << "\n";
  std::cout <<"The Euclidian norm of vector two is: " << sqrt(norm2) << "\n"; 

return 0;



}
