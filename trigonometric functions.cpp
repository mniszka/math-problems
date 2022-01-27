
#include <iostream>      
#include <math.h>       
#define PI 3.14159265

using namespace std;

int main ()
{
  double degree, result, cosinus, sinus;
  int func;
  cout<<"Put number (degree)"<<endl;
  cin>>degree;
  
  cout<<"choose a trigonometric function:"<<endl;
  cout<<"1. sinus"<<endl;
  cout<<"2. cosinus"<<endl;
  cout<<"3. tangens"<<endl;
  cout<<"4. cotangens"<<endl;
  cin>> func;
  

  cosinus = cos ( degree * PI / 180.0 );
  sinus = sin ( degree * PI / 180.0);

  switch(func){
    case 1: result = sinus;
    break;
    case 2: result = cosinus;
    break;
    case 3: result = sinus/cosinus;
    break;
    case 4: result = cosinus/sinus;
    break;
  }
  
  cout<<"The cosine of "<<degree<< " degrees is "<< result;
  return 0;
}
