#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i=1,coun=1;
cin>>n;
while(coun<=10)
{
    if(i>=1 && i<11)
{
           cout<<i<<" x "<<n<<" = "<<n*i<<endl;
    i++;
    coun++;
}
}


return 0;
}
