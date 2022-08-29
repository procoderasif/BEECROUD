#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,i=1;
cin>>n;
while(n>=2 && n<=1000){
if(i>=1 && i<=10){
    cout<<i<<" x "<<n<<" = "<<n*i<<endl;
    i++;
}
}


return 0;
}
