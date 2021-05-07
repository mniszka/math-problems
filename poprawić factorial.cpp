//problem z liczbami 111, 1111 itd. -> wychodzi 0

#include <iostream>
using namespace std;

long long factorial(int number){
    if(number<2) return 1;
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
