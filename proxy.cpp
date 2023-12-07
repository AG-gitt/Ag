#include <iostream>
#include <vector>
using namespace std;

void halat(int a);


void halat(int a)
{
    int t = a;
    int list[12];
    int n=4;
    if(a<1000)
    {
        cout<<"IP dade shode emkanpazir nist";
    }
    while(a>999)
    {
        a=a/10;
       if(a>999)
        {
            n++;
        }
    }
    a=t;
    for(int i = 0 ; i<n ; i++)
    {
        list[i] = a % 10 ;
        a=a/10;
    }
    for(int i = 0 ; i<n ; i++)
    {
        cout<<list[i]<<endl;
    }
}
int main(void)
{
    int a;
    cout<<"IP ro bede: ";
    cin>>a;
    halat(a);
}
