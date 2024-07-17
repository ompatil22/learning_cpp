#include<iostream>
using namespace std;
class swapping
{
    int c;
    public:
    void swap(int &a,int &b)
    {
        c=a;
        a=b;
        b=c;
    }
};
int main()
{
    swapping s;
    int x,y;
    cout<<"\n enter the two numbers:-";
    cin>>x>>y;
    cout<<"\n before swap x="<<x<<"\t y="<<y;
    swap(x,y);
    cout<<"\n after swap x="<<x<<"\ty="<<y;
    return(0);
}
