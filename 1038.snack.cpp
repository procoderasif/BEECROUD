#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    double n;
    cin>>n>>a;
    if(n==1)
    {
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<4.00*a<<endl;
    }
    else if(n==2)
    {
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<2.50*a<<endl;
    }
    else if(n==3)
    {
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<5.00*a<<endl;
    }
    else if(n==4)
    {
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<2.00*a<<endl;
    }
    else if(n==5)
    {
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<1.50*a<<endl;
    }
    return 0;
}
