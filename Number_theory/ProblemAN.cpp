#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t;
    long long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=0;b=0;
        if(n%2==0)
        {
            a=n/2;
            b=n/2;
        }
        else
        {
            a=n-1;
            b=1;
        }

        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}