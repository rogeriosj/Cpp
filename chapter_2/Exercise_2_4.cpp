#include <iostream>

int main(int argc, char* argv[])
{
  double u[3] = {1.0, 2.0, 3.0};
  double v[3] = {6.0, 5.0, 4.0};
  double A[3][3] = {{1.0, 5.0, 0.0}, {7.0, 1.0, 2.0}, {0.0, 0.0, 1.0}};
  double B[3][3] = {{-2.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, {4.0, 1.0, 0.0}};

  double w[3];
  double x[3];
  double y[3] = {0, 0, 0};
  double z[3];
  double C[3][3];
  double D[3][3]= {{0,0,0} ,{0,0,0}, {0,0,0}}; 

  for (int i=0; i<3; i++)
    {
      w[i] = u[i] - 3.0*v[i];
    }

  for (int i=0; i<3; i++)
    {
      x[i] = u[i] - v[i];
    }

// calculo de y  

  for (int i=0; i<3; i++)
    {
      for (int j=0; j<3; j++)
        {
         y[i] += A[j][i] * u[j];
       // std::cout << y[0] << " ";

        }
    }

//calculo de z

  for (int i=0; i<3; i++)
    {
      z[i] = y[i] - u[i];
    }


// calculo de C

  for (int i=0; i<3; i++)
    {
      for (int j=0; j<3; j++)
        {
         C[i][j] = 4* A[i][j] - (3* B[i][j]);
        }
    }     


// calculo de D

  
  for (int i=0; i<3; i++)
   {
      for (int j=0; j<3; j++)
        {
          for(int k=0; k<3; k++)         
	    {
		D[i][j] +=  A[k][i] * B[j][k];
	    }
        }
    }



// imprimindo os vetores e matrizes

  for (int i=0; i<3; i++)
  {
    for( int j=0; j<3; j++)
	{
	  std::cout << D[i][j]<< " ";
	}
	std::cout << "\n";
  }

  return 0;
}
