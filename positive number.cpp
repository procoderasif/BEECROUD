#include <iostream>

using namespace std;

int main()
{

    double a,b,c,d,e,f,count=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(a>0)
    {
        count++;
    }
    if(b>0)
    {
        count++;
    }
    if(c>0)
    {
        count++;
    }
    if(d>0)
    {
        count++;
    }
    if(e>0)
    {
        count++;
    }

    if(f>0)
    {
        count++;
    }
    cout<<count<<" valores positivos"<<endl;

}
