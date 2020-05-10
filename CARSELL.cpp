#include <iostream>
#include<math.h>
#include <algorithm> 
using namespace std;
#define mod 1000000007
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        long long int sum=0;
        long long int count =0;
        long long int x=0;
        for(int i=n-1; i>=0; i--)
        {
            sum = (sum+max(x,arr[i]-count))%mod;
            sum%=mod;
            count++;
        }
        cout<<sum<<endl;
    }
    return 0;
}