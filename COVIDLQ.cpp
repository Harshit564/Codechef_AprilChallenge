#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    string no="NO";
    string y="YES";
    int n;
    while(t--)
    {
        cin>>n;
        vector<int> v;
        int flag=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           if(a[i]==1)
           v.push_back(i);
        }
        for(int i=1;i<v.size();i++)
        {
            if(v[i]-v[i-1]<=5)
            flag=1;
        }
        if(flag==1)
        cout<<no<<endl;
        else
        cout<<y<<endl;


        }
	// your code goes here
	return 0;
}