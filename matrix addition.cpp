#include <iostream>

using namespace std;

int main()
{
    const int n=10;
   int i,j,a[n][n], b[n][n], c[n][n];

   //matrix a
   for(i=0; i<n; i++){
    for(j=0; j<n; j++){
            a[i][j]=1;
    }
   }
     //matrix b
   for(i=0; i<n; i++){
    for(j=0; j<n; j++){
           b[i][j]=2;
    }
   }
     //matrix c (adding a + b)
   for(i=0; i<n; i++){
    for(j=0; j<n; j++){
            c[i][j]= a[i][j] + b[i][j];
    }


   }

   //display matrix c
   for(i=0; i<n; i++){
    for(j=0; j<n; j++){
       cout<<c[i][j]<<"\t";
    }
    cout<<endl;

   }

    return 0;
}
