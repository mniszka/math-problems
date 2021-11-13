// Check if three sides of a triangle can create a right triangle. We use the Pythagoras' theorem which is a relation among the three sides of a right triangle.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

int a=3,b=4,c=5; //pythagorean triple 

if((a*a+b*b) == (c*c) | (a*a+c*c)==(b*b) | (b*b+c*c) == (a*a)){
    cout<<"yes";
}
else
    cout<<"no";


_getch();
return 0;
}
