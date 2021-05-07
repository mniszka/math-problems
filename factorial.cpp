#include <iostream>
using namespace std;

long long factorial(int number){
    if(number==1) return 1;
    number= number * factorial(number-1);
}

int main()
{
    int number;
   cout<<"Put a number"<<endl;
   cin>> number;
   cout<< factorial(number);
   return 0;

}
