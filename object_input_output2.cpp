#include<iostream>
using namespace std;
class student 
{
    int rno;
    char name[10];
    float per;
    public:
    void get()
    {
        cout<<"\n enter rno name and per:-";
        cin>>rno>>name>>per;

    }
    void put()
    {
        cout<<"\n roll no ="<<rno;
        cout<<"\n student of the name="<<name;
        cout<<"\n percentage ="<<per;

    }
};
int main()
{
    student s1;
    s1.get();
    s1.put();
    return(0);
}