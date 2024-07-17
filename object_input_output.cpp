#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    void get()
    {
        cout<<"\n enter the two number:-";\
        cin>>a>>b;

    }
    void put()
    {
        cout<<"\n value of a ="<<a;
        cout<<"\n value of b="<<b;

    }
};
int main()
{
    demo n1;
    n1.get();
    n1.put();
    return(0);
}