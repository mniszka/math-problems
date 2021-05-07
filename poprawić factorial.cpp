//problem z większymi liczbami >20 --> wychodzi liczba ujemna
//liczby >65 --> wychodzi 0

#include <iostream>

using namespace std;

long long factorial(int number){

    if(number ==1) return 1;
    return number * factorial(number-1);
}

int main()
{
int number;
for(;;){
   cout<<"Put a number bigger than 0 and smaller than 21"<<endl;
   cin>> number;
   cout<< number << "!:  "<<factorial(number)<<endl;
}
   return 0;

}

