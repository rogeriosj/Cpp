//create a array that store five numbers and them calculate the average
#include <iostream>

int main(int argc, char* argv[])
{
  int array[5]= {34, 58, 57, 32, 43};
  double average;

  average = ( ((double) (array[0]) + (double) (array[1]) + (double) (array[2]) + (double) (array[3]) + (double) (array[4]) ) / ((double) (5)) ) ;

  std::cout << "The avarage is: " << average << "\n";
  

  return 0;
}
