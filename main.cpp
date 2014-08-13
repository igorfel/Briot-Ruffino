#include <iostream>

using namespace std;

int main(int i)
{
    int A[4],B[20];

    cout<<"Entre com os valores da funcao\n";
    for(i = 0 ; i < 4 ; i++)
    {
        cout<<"A["<<i<<"]=";
        cin>>A[i];
    }
    cout<<"\na = "<<A[0]<<", b = "<<A[1]<<", c = "<<A[2]<<", d = "<<A[3]<<"\n";

    int  div,x = 0;

    div = A[3];
    cout<<"dividendo = "<<div<<"\n";

    for(i = 1 ; i <= 20 ; i++)
    {
          x = div % i;
          if(x == 0)

         {
              x = div/i;
              B[i] = x;
              cout<<"B = "<<B[i]<<", ";
          }
    }
    cout<<"\nx = "<<x;




    return 0;
}
