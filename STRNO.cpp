#include <iostream>
#include<map>
#include<cmath>
using namespace std;
map<int,int> prime(int n)
{
    map<int,int> ap;
    while(n%2==0)
    {
        ap[2]++;
        n=n/2;
    }
    for(int i=3;i<sqrt(n);i=i+2)
    {
        while(n%i==0)
        {
            ap[i]++;
            n=n/i;
        }
    }
    if(n>2)
    {
        ap[n]++;

    }
    return ap;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k;
        cin>>x>>k;
       map<int,int> out=prime(x);
       int count=0,scount=0,tcount=0;
       for(auto i=out.begin();i!=out.end();i++)
       {
           if(i->second==1)
           {
               scount++;
           }
           else
           {
               count=count+i->second;
               tcount++;
           }

       }

       if( k<=scount+count)
       {
           cout<<"1"<<endl;
       }
       else
       {
           cout<<"0"<<endl;
       }
    }
}
