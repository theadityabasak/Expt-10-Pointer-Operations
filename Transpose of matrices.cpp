#include<iostream>
using namespace std;
int main()
{   int a[3][2],i,j,b[3][2],s[3][2];
    cout<<"Input 6 numbers:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            b[i][j]=a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            t=b[i][j];
            b[i][j]=b[j][i];
            b[j][i]=t;
        }
    }
    cout<<"ORIGINAL MATRIX: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"\n TRANSPOSE MATRIX:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<b[i][j]<<" ";
        }cout<<endl;
    }
return 0;
}

//Input 6 numbers:1
//2
//3
//4
//5
//6
//ORIGINAL MATRIX: 
//1 2 
//3 4 
//5 6 
//TRANSPOSE MATRIX:
//1 2 
//5 4 
//6 3 

