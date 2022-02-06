//check whether the sequence is arithmetic or geometric

#include <iostream>
using namespace std;

int a,b,c;

char checkingSequence(){
if(b-a == c-b){

   int r=b-a;
   cout<<"arithmetic sequence"<<endl;
    cout<<"the next numbers of the sequence are: "<<endl;
   for(int i=c+r; i<=c+r*5; i=i+r){
     cout<<i<<", ";
   }
}

else
if(b/a == c/b){
   int d=b/a;
  cout<<"geometric sequence"<<endl;
    cout<<"the next numbers of the sequence are: "<<endl;
   for(int i=c*d; i<=c*d*10; i=i*d){
     cout<<i<<", ";
}
}

}

int main(){
//put 3 first numbers
cout<<"Put first three numbers of the sequence"<<endl;
cin>>a>>b>>c;
checkingSequence();


}

