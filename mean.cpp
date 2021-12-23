#include <iostream>
using namespace std;

int main() {

int numbers[3]= {1,5,3};
int sum=0;
int arr_length= sizeof(numbers)/4;

for(int i=0; i<arr_length; i++){
  sum += numbers[i];
}

//arithmetic mean
double arithm_mean = sum/arr_length;

cout<<"Arithmetic mean: "<<arithm_mean<<endl;
cout<< "Geometric mean: "<<geom_mean;
return 0;
} 
