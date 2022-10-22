#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
cin>>n;
    for(int i=2; i<n; i++)
    {

        if(n%i==0)
        {
            x++;
            break;
        }
    }
    if(x==0)
    {
        cout<<"prime"<<endl;
    }
    else
    {
        cout<<"not prime"<<endl;
    }


    return 0;
}
