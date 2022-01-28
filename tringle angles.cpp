
//angles of a triangle


#include <iostream>
#include <cmath>
#define PI 3.141
using namespace std;

float a,b,c;
float alpha;
float sides[] = {a,b,c};

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

//radians to degrees:
float rad_to_degree(float rad){
  return (rad*180/PI);
};

//regular triangle:
void regular(float x, float y){ 
  alpha = atan(x/y); //arcus tangens
  alpha = rad_to_degree(alpha);
  float beta = 90-alpha;
  cout<< "This is a regular triangle."<<endl;
  cout<< "alpha: "<< alpha<< ", beta: "<<beta<< ", gamma: "<< 180-alpha - beta;

};

//not a regular triangle:
double not_regular(){
  alpha=2;

  return alpha;

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
  float sides[] = {a,b,c};
  //cout<<sides[0]/sides[1]; //działa

 //sorting sides of a triangle:
if(sides[0]> sides[1]) swap(sides[0], sides[1]);
if(sides[1]> sides[2]) swap(sides[1], sides[2]);
if(sides[0]> sides[1]) swap(sides[0], sides[1]);

//cout<<sides[1]<<endl;//wychodzi 4 zamiast 4.0



  if(if_triangle() == true){
   if( if_regular() == true){
     regular(sides[0], sides[1]);
   }
   else {
     cout<<not_regular();
   }

  }
  else cout<<"This is not a triangle";




   

   
}

