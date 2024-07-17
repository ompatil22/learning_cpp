#include<iostream>
using namespace std;
class calculation
{
    public:
    void sum(int &p,int &c,int &m,int &t,int &pr)
    {
        t=p+c+m;
        pr=t/3;
    }
};
int main()
{
    calculation c1;
    int phy,chem,math,total,per;
    cout<<"\n enter marks of 3 sub:-";
    cin>>phy>>chem>>math;
    c1.sum(phy,chem,math,total,per);
    cout<<"\n total="<<total;
    cout<<"\n percentage="<<per;
    return(0);
}

