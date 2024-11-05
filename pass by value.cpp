#include <iostream>
using namespace std;
void swap(int x, int y)
{
    int t;
    t= x;
    x = y;
    y = t;
}
int main()
{
    int a=5,b=2;
    swap(a,b);
    cout<<"VAlue of a is: "<<a<<endl;
    cout<<"Value of b is: "<<b<<endl;
    return 0;
}


//VAlue of a is: 5
//Value of b is: 2