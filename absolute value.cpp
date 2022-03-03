//first soltion (without pointers):

#include <iostream>
using namespace std;

int absoluteValue(int number){
  if(number<0) return number*-1;
  else return number;
}

int main() {

  int number;
  cout<<"Put a positive or negative number "<<endl;
  cin>> number;
  cout<<absoluteValue(number);
  
  return 0;
}


//second solution (with pointers):

#include <iostream>
using namespace std;

void absoluteValue(int *number){
  if(*number<0) *number = (*number*-1);
  
}

int main() {

  int number;
  cout<<"Put a positive or negative number "<<endl;
  cin>> number;
  absoluteValue(&number);
  cout<<number;
  
  return 0;
}
