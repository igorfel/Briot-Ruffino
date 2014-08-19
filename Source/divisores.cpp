#include "divisores.h"
#include <iostream>

divisores::divisores()
{
}

int *divisores::divs(int dividendo)
{
    int aux, n(0), _divisores[100];
    for(int i = 1 ; i <= 100 ; i++)
    {
          aux = dividendo % i;

          if(aux == 0)
         {
              aux = i;
              _divisores[n] = aux;
              _divisores[n+1] = -aux;
              std::cout<<"raiz["<<n<<"] = "<<_divisores[n]<<"\n";
              std::cout<<"raiz["<<n+1<<"] = "<<_divisores[n+1]<<"\n";
              n+=2;
          }
    }

    return _divisores;
}
