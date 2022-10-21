#include<bits/stdc++.h>
using namespace std;
int main(){
int i, n,a=0,b=1,c;
cin>>n;
for(i=0;i<n;i++){
    if(i<=1)
    {
    cout<<i<<" ";
    }
    else if(i==n-1){
    c=a+b;
    cout<<c<<endl;
    }
    else{
    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
    }

}

}





