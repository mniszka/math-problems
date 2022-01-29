//angles of a triangle

#include <iostream>
#include <cmath>
#define PI 3.141
using namespace std;

float a, b, c, alpha, beta = 90-alpha, gamma;

//check if this is a triangle:
bool if_triangle(){
    if((a+b>c && b+c>a && a+c>b) && a>0 && b>0 && c>0){
    return true;
  }
  else return false;
};

//check if this is a regular triangle:
bool if_regular(){
   if(a*a + b*b == c*c ||  b*b + c*c == a*a || c*c + a*a == b*b){
     return true;
   }
   else return false;
};

//conversion radians to degrees:
float rad_to_degree(float rad){
  return (rad*180/PI);
};

//if it is a regular triangle we use arcus tangens function:
void regular(float a, float b){
  alpha = rad_to_degree(atan(a/b)); 

  cout<< "This is a regular triangle."<<endl;
  cout<< "alpha: "<< alpha<< ", beta: "<<beta<< ", gamma: "<< 180-alpha - beta;

};

//if it is not a regular triangle we use acos function:
void not_regular(float a, float b, float c){

  alpha  = rad_to_degree(acos((b*b+c*c-a*a)/(2*b*c)));
  beta  = rad_to_degree(acos((c*c+a*a-b*b)/(2*c*a)));
  gamma = rad_to_degree(acos((a*a+b*b-c*c)/(2*a*b)));

  cout<< "alpha: "<< alpha<< ", beta: "<<beta<< ", gamma: "<< gamma;

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

  float sides[] = {a, b, c};


 //sorting sides of a triangle to get to know which one is a hypotenuse:
if(sides[0]> sides[1]) swap(sides[0], sides[1]);
if(sides[1]> sides[2]) swap(sides[1], sides[2]);
if(sides[0]> sides[1]) swap(sides[0], sides[1]);


  if(if_triangle() == true){
   if( if_regular() == true){
     regular(sides[0], sides[1]);
   }
   else {
     not_regular(sides[0], sides[1], sides[2]);
   }

  }
  else cout<<"This is not a triangle";


  return 0;
}
