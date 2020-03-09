#include <iostream>

int main (int argc, char* argv[])
{
  double x, y, z;

  std::cout << "Insira um numero x e um y: ";
  std::cin >> x >> y ;
  if ( (x >= y) || ( x < 5.0 ) )
  {
    z = 4.0;
  }
  else
  {
    z = 2.0;
  } 

  std::cout << z << "\n";


  return 0;
}
