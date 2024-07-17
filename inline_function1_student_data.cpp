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
        cout<<"\n enter rno nmae and per:-";
        cin>>rno>>name>>per;
    }
    void put();
};
inline void student::put()
{
    cout<<"\n rno="<<rno;
    cout<<"\n student name="<<name;
    cout<<"\n percentage="<<per;
}
int main()
{   
    student s1;
    s1.get();
    s1.put();
    return(0);
}