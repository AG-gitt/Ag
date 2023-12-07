#include <iostream>
#include <vector>
using namespace std;

void halat(int a);


void halat(int a)
{
    int t = a;
    int octet[3];
    int list[12];
    int n=4;
    if(a<1000)
    {
        cout<<"IP dade shode emkanpazir nist"<<endl;
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
    for(int i = n-1 ; i>=0 ; i--)
    {
        list[i] = a % 10 ;
        a=a/10;
    }
    for(int i = 0 ; i<n ; i++)
    {
        cout<<list[i]<<endl;
    }
    if(n>4)
    {
        for(int i = 0 ; i<4 ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                octet[i]=list[n]+octet[i];
                if(octet[j]<256)
                {
                    
                }
            }
        }
        if(n=4)
        {
            cout<<list[0]<<"."<<list[1]<<"."<<list[2]<<"."<<list[3]<<endl;
        }
    }
}   
int main(void)
{
    int a;
    cout<<"IP ro bede: "<<endl;
    cin>>a;
    halat(a);
}
