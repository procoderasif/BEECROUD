#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,even=0,odd=0,pos=0,neg=0;
    for(i=1;i<=5;i++){
    cin>>a;
   if(a>=0 && a%2==0){
    even++;
    pos++;

   }
   else if(a>=0 && a%2==1){
     odd++;
     pos++;

   }
  else if(a<0 && a%2==0){
     even++;
     neg++;

   }
   else if(a<0 && a%2==1){
    odd++;
    neg++;

   }


    }
cout<<even<<" valor(es) par(es)"<<endl<<odd<<" valor(es) impar(es)"<<endl<<pos<<" valor(es) positivo(s)"<<endl<<neg<<" valor(es) negativo(s)"<<endl;



    return 0;
}

