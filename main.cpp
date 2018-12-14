#include <iostream>
#include <fstream>

using namespace std;
#define ROZM 1000

int main()
{

    int l1[ROZM],l2[ROZM],l3[ROZM],y[ROZM],z[ROZM],suma;
    int ile = ROZM;
    ifstream tr;
    tr.open("trojki.txt");


    for(int i=0;i<1000;i++)
    {

        suma=0;
        tr>>l1[i]>>l2[i]>>l3[i];

    y[i]=l1[i];
    z[i]=l2[i];


    while(y[i]>0)
    {
        suma=suma+y[i]%10;
        y[i]=y[i]/10;
    }
     while(z[i]>0)
    {
        suma=suma+z[i]%10;
        z[i]=z[i]/10;
    }


        if(suma==l3[i])
        {
            cout<<l1[i]<<endl;
            cout<<l2[i]<<endl;
            cout<<l3[i]<<endl<<endl;

        }
    }


    return 0;
}

