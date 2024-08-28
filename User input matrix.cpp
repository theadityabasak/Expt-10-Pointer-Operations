#include<iostream>
using namespace std;
int main()
{
    int a[3][2],i,j;
    cout<<"INput 6 numbers:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"MATRIX OF 6 NUMBERS: ";
    for(i=0;i<3;i++)
    {
      for(j=0;j<2;j++)
      {
        cout<<a[i][j]<<" ";
      }  cout<<endl;
    }
}

//INput 6 numbers:1
//2
//3
//4
//5
//6
//MATRIX OF 6 NUMBERS: 
//1 2 
//3 4 
//5 6 
