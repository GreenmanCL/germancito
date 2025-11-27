#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y, resultado;
    cin>>x>>y;
    resultado = ((x*x*x)+(x*x)) / ((y*y)-y);
    resultado = resultado - ((x/y) + 5);
    resultado = resultado / (2*x);
    cout<<fixed << setprecision(12) << resultado;

    return 0;
}

