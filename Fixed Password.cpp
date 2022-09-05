#include <iostream>

using namespace std;

int main() {
int n=2002,a;
     while(1){
         cin>>a;
         if(a==n){
             cout<<"Acesso Permitido"<<endl;
             break;
         }

         else{
             cout<<"Senha Invalida"<<endl;
         }
     }

    return 0;
}

