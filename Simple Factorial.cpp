#include<bits/stdc++.h>
using namespace std;
int main(){
int n,temp=1;
cin>>n;
for(int i=n;i>=1;i--){
    temp=temp*i;
}
cout<<temp<<endl;

return 0;
}
