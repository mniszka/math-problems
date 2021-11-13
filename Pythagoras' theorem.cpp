/* We have given three square areas. Check if we can create a riht triangle if we put them together. One side of a square could be one side of a triangle. To solve the problem 
we use the Pythagoras' theorem which is a relation among the three sides of a right triangle.*/

#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){

int area_1=9,area_2=16,area_3=25; //square roots of these numbers is pythagorean triple  
double side_a = sqrt(area_1);
double side_b = sqrt(area_2);
double side_c = sqrt(area_3);

if((side_a*side_a+side_b*side_b) == (side_c*side_c) | (side_a*side_a+side_c*side_c)==(side_b*side_b) |
   (side_b*side_b+side_c*side_c) == (side_a*side_a)){
    cout<<"yes";
}
else
    cout<<"no";


_getch();
return 0;
}
