#include <iostream>

using namespace std;

int main()
{
    long int t[20] = {}; 
    long int i =0;

    t[0]=1;
    for(i=1; t[i]<3;i++){
    t[i]= t[i-1]*3;
    cout<<t[i]<<endl;
    }


 
   return 0;

}
