#include <bits/stdc++.h>
using namespace std;
int main(){
    
    double x,y,z,res,res2,final,fin;
    cin>>x>>y>>z;
    
    res=y*2+z;
    res= pow(res, 2.8)-z;
     final=x/z;
    res2=x+y-final;
    fin=res/res2;
    cout<<fixed<<setprecision(6)<<fin;
    

    return 0;
    
}