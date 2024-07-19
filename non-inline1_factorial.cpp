#include<iostream>
using namespace std;
class series
{
    int no,i,f;
    public:
    void get()
    {
        cout<<"\n enter the number to check fact:-";
        cin>>no;
    }
    void fact();
};
void series::fact()
{
    f=1;
    for ( i = 1; i <=no; i++)
    {
        f=f*i;
    }
    cout<<"\n factorial="<<f;
}
int main()
{
    series s1;
    s1.get();
    s1.fact();
    return(0);

}