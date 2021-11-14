//Find zeros of the function (what are values of x): y = x^2 + 5 x+ 6

//first solution:

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

//second solution:

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){

float a=1, b=5, c=6, delta, x1, x2;
int number_of_x;

delta = b*b - 4*a *c;

if(delta<0) number_of_x = 0;
if(delta==0) number_of_x = 1;
if (delta >0) number_of_x = 2;

switch(number_of_x){
case 0: cout<<"no zeros";
break;

case 1: cout<< -b/2*a;
break;

case 2: {
    x1 = (-b - sqrt(delta)) /2*a;
    x2 = ((-b + sqrt(delta)) /2*a);
    cout<<"There're two zeros: "<<x1<< " and " <<x2;
}
break;
}

_getch();
return 0;
}





