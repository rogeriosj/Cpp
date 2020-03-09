#include <iostream>

int main(int agrc, char* argv[])
{
  double A[2][2] = {{4, 1}, {10,1} };
  double B[2][2];
  double inv_A[2][2];
  double det


  B[0][0]  = A[1][1];
  B[0][1]  = - A[0][1];
  B[1][0]  = - A[1][0];
  B[1][1]  = A[0][0];




  for ( int i; i<1; i++)
    {
      for ( int j; j<1; j++)
        {
          inv_A[i][j] = 1/A[0][0] * A[1][1] - A[1][0] * A[0][1]   B[i][j];
	}
    }  



  for (int i=0; i<2; i++)
  {
    for( int j=0; j<2; j++)
	{
	  std::cout << inv_A[j][i]<< " ";
	}
	std::cout << "\n";
  }

  return 0;
}
