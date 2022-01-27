
//angles of a triangle
//dokończyc


#include <iostream>
#include <cmath>
#define PI 3.1415926535897932
using namespace std;

int a,b,c, hypotenuse;
double result, sinus_alpha, sinus_beta;

bool if_triangle(){
if((a+b>c && b+c>a && a+c>b) && a>0 && b>0 && c>0){
    return true;
  }
  else return false;
};


bool if_regular(){
   if(a*a + b*b == c*c ||  b*b + c*c == a*a || c*c + a*a == b*b){
     return true;
   }
   else return false;
};

//finding a hypotenuse- przeciwprostokątna
int hypotenuse(){
if(a>b && a>c) hypotenuse= a;
if (b>a && b>c) hypotenuse = b;
if(c>a && c>b) hypotenuse = c;
}

//regular triangle
double regular(){
  sinus_alpha = sin()
  result = 1;

  return result;

};

//not a regular triangle
double not_regular(){
  result=2;

  return result;

};


int main()
{
  
   cout<<"Put 3 sides of a triangle"<<endl;
   cout<<" a = ";
   cin>>a;
   cout<<" b = ";
   cin>>b;
   cout<<" c = ";
   cin>>c;

 
  if(if_triangle() == true){
   if( if_regular() == true){
     cout<<regular();
   }
   else {
     cout<<not_regular();
   }

  }
  else cout<<"This is not a triangle";


   

   
}

