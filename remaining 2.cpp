#include <iostream>

using namespace std;

int main() {

     int n,i;
    cin>>n;
    while(i>=0 && i<=10000){
        if(i%n==0){
            cout<<i+2<<endl;
        }
        i++;
    }

    return 0;
}

