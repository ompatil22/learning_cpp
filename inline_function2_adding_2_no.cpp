#include<iostream>
using namespace std;
class number
{
    int a,b,c;
    public:
    void collect()
    {
        cout<<"\n enter two numbers:-";
        cin>>a>>b;
    }
    void print()
    {
        cout<<"\n value of A="<<a;
        cout<<"\n value of B="<<b;
    }
    void sum();
};
inline void number::sum()
{
    c=a+b;
    cout<<"\n ADDITION ="<<c;
}
int main()
{
    number n1;
    n1.collect();
    n1.print();
    n1.sum();
    return(0);
}