//angles of a triangle
//poprawić


#include <iostream>
#include <cmath>
#define PI 3.141
using namespace std;

float a,b,c;
float alpha; //do poprawy
float sides[] = {a,b,c}; //do poprawy

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

//conversion radians to degrees:
float rad_to_degree(float rad){
  return (rad*180/PI);
};

//if it is a regular triangle:
void regular(float a, float b){ 
  alpha = rad_to_degree(atan(a/b)); //arcus tangens
  
  float beta = 90-alpha; //do poprawy
  cout<< "This is a regular triangle."<<endl;
  cout<< "alpha: "<< alpha<< ", beta: "<<beta<< ", gamma: "<< 180-alpha - beta;

};

//if it is not a regular triangle:
void not_regular(float a, float b, float c){
  float beta, gamma; //do poprawy

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
  float sides[] = {a,b,c}; //do poprawy


 //sorting sides of a triangle:
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
