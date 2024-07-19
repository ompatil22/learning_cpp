#include<iostream>
using namespace std;
class reverse
{
    int no,rem,rev;
    public:
    void get()
    {
        cout<<"\n enter number to reveres no";
        cin>>no;
        cout<<"\n before rev no ="<<no;
    }
    void revs();

};
void reverse::revs()
{
    rev=0;
    while (no>0)
    {
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    cout<<"\n after rev no ="<<rev;  
}
int main()
{
    reverse r1;
    r1.get();
    r1.revs();
    return(0);

}