
#include <iostream>

using namespace std;

int main() {

    int i=0,n=1,a,pos=0;
    while(n<=100){
        cin>>a;
        if(a>i)
        {
        i=a;
        pos=n;
        }
        n++;
    }
cout<<i<<endl;
cout<<pos;


    return 0;
}
