#include<iostream>
#include<string.h>
using namespace std;
class swapping
{
    char str[10];
    public:
    void swap(int &a,int &b)
    {   int c;
        c=a;
        a=b;
        b=c;
    }
    void swap(float &x,float &y)
    {   int z;
        z=x;
        x=y;
        y=z;
    }   
    void swap(char *s1,char *s2)
    {
        strcpy(str,s1);
        strcpy(s1,s2);
        strcpy(s2,str);
    }
};
int main()
{
    swapping s;
    int i1,i2;
    float f1,f2;
    char str1[10], str2[10];
    cout<<"\n enter two int number :-";
    cin>>i1>>i2;
    cout<<"\n enter two float number :-";
    cin>>f1>>f2;
    cout<<"\n before swap i1="<<i1<<"\t i2="<<i2;
    s.swap(i1,i2);
    cout<<"\n after swap i1="<<i1<<"\t i2"<<i2;
   ; cout<<"\n before swap f1="<<f1<<"\t f2="<<f2;
    s.swap(f1,f2);
    cout<<"\n after swap f1="<<f1<<"\t f2="<<f2;
    cout<<"\n enter the two string value :-";
    cin>>str1>>str2;
    cout<<"\n before swap string1="<<str1<<"\t string2="<<str2;
    s.swap(str1,str2);
    cout<<"\n after swap string1="<<str1<<"\t string2="<<str2;
    return(0);
}