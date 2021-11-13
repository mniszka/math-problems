//Find zeros of the function (what are values of x): y = x^2 + 5 x+ 6

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){

float a=1, b=5, c=6, delta;
delta = b*b - 4*a *c;

if(delta<0){
    cout<<"no zero";
}

else{
if(delta==0){
    cout<< -b/2*a;
}

else
{
    cout<<(-b - sqrt(delta)) /2*a<< " and " << ((-b + sqrt(delta)) /2*a);
}
}

_getch();
return 0;
}


