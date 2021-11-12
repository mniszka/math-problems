//how many numbers among powers of 3 are powers of 9 as well.

#include <iostream>
using namespace std;


int main(){
  
  int f=1, g=1, count=0;
  int pow9[10] ={};
  int pow3[10]={};
  
  //powers of 9
  for(int i=0; i<10; i++){
    pow9[i] = f;
    f= f*9;
  }

  //powers of 3
  for(int i=0; i<10; i++){
  pow3[i] = g;
  g = g*3;
  }

//compare
  for(int i=0;i<10;i++){
    for(int j=0; j<10; j++){
    if (pow9[i] == pow3[j]){
      count++; 
      //cout<<j<<endl; 
    }
        
  }
  }
cout<<"How many: " <<count<<endl;
//cout<<"numbers: "<<

}
        

