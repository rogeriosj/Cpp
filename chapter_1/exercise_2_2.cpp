#include <iostream>

int main (int argc, char* argv[])
{
  double p, q, x, y;
  int j;

  std::cout << "Coloque os valores de p, q, y e j: ";
  std::cin >> p >> q >> y >> j;
/* primeiro ponto

    if( p >= q || j != 10)
    {
      x = 5.0;
    }

 //segundo ponto

    if( y >= q && j == 20 )
    {
      x = 5.0;
    }
    else
    {
      x = p;
    }

*/ //terceiro ponto

    if( p > q)
    {
      x = 0;
    }
    else if ( p <= q && j == 10)
    {
      x = 1;
    }
    else 
    {
      x = 2;
    }
 
  std::cout << x << "\n";
  return 0;
}
