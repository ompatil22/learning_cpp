#include<iostream>
using namespace std;
class demo
{
    int z;
    float c;
    public:
    void sum (int x,int y)
    {
        z=x+y;
        cout<<"\n addition of two int number="<<z;
    }
    void sum(float a,float b)
    {
        c=a+b;
        cout<<"\n addition of two float number="<<c;
    }
};
int main()
{
    demo d1;
    int i1,i2;
    float f1,f2;
    cout<<"\n enter the two int number:-";
    cin>>i1>>i2;
    cout<<"\n enter two float member:-";
    cin>>f1>>f2;
    d1.sum(i1,i2);
    d1.sum(f1,f2);
    return(0);
}