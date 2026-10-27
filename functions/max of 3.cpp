//WAP to find the max of any three numbers using functions
#include <iostream>
using namespace std;
int main()
{
    float maximum(float,float,float);
    float x,y,z,max;
    cout<<"Enter three numbers \n";
    cin>>x>>y>>z;
    max=maximum(x,y,z);
    cout<<"maximum = "<<max;
}
float maximum (float a,float b,float c)
{

    if (a>b){
        if(a>c)
            return (a);
        else
            return (c);
        }
    else {
        if (b>c)
            return (b);
        else
            return (c);
    }
}
