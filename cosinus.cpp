
#include <iostream>      
#include <math.h>       
#define PI 3.14159265

using namespace std;

int main ()
{
  double degree, result;
  cout<<"Put number (degree)"<<endl;
  cin>>degree;
  result = cos ( degree * PI / 180.0 );
  cout<<"The cosine of "<<degree<< " degrees is "<< result;
  return 0;
}
