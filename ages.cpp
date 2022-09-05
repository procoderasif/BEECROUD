#include <bits/stdc++.h>

using namespace std;

int main() {
  double a=0,b=0,n;
  while(1)
  {
  cin>>n;
  if(n<0)
  {
    break;

  }
  a=a+n;
  b++;
  }
  double ans=a/b;
  cout<<fixed<<setprecision(2)<<ans<<endl;

    return 0;
}
