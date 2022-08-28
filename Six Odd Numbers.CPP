#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,cnt,i;
    cin>>n;
    cnt=0;
    while(cnt<6)
    {

        if(n%2==1)
        {
            cout<<n<<endl;
            cnt++;

        }
        n++;
    }


    return 0;
}
