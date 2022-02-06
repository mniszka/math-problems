//check whether the sequence is arithmetic or geometric


#include <iostream>
using namespace std;

char checkingSequence(int a, int b, int c){
if(b-a == c-b){

   int difference=b-a; 
   cout<<"arithmetic sequence"<<endl;
    cout<<"the next numbers of the sequence are: "<<endl;
   for(int i=c+difference; i<=c+difference*5; i=i+difference){
     cout<<i<<", ";
   }
}

else
if(b/a == c/b){
   int quotient=b/a; 
  cout<<"geometric sequence"<<endl;
    cout<<"the next numbers of the sequence are: "<<endl;
   for(int i=c*quotient; i<=c*quotient*10; i=i*quotient){
     cout<<i<<", ";
}
}

}

int main(){
int a,b,c;
//put 3 first numbers
cout<<"Put first three numbers of the sequence"<<endl;
cin>>a>>b>>c;
checkingSequence(a,b,c);

return 0;
}
