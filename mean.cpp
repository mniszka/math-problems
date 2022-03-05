#include <iostream>
using namespace std;

int main() {

int numbers[3]= {1,5,3};
int sum=0;
int array_length = sizeof(numbers)/4;

for(int i=0; i<array_length; i++){
  sum += numbers[i];
}

//arithmetic mean
double arithmetic_mean = sum/array_length;
  
//geometric mean
//square it away

cout<<"Arithmetic mean: "<<arithmetic_mean<<endl;
cout<< "Geometric mean: "<<geometric_mean;
return 0;
} 
