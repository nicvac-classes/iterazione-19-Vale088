#include <iostream>
using namespace std;

int main() {
   int N,numDivisori;
   float quoziente,resto,d,c;
   cout<<"scrivi un numero intero"<<endl;
   cin>>N;
   numDivisori=0;
   for(d=1;d<=N;d++){
    quoziente=N/d;
    resto=N/d;
    if(resto=0){
        cout<<d & "è divisore"<<endl; 
        numDivisori=numDivisori+1;
    }
     if(numDivisori=2){
        cout<<N &"è primo"<<endl;
     }else{ 
        cout<<N & "non è un numero primo"<<endl; 
     }
   }

//LEGGERE LE ISTRUZIONI NEL FILE README.md
