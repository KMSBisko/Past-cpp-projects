#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,b;
    cin >> n;
    int a[n];
    for (i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++)
        {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] >= a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        cout << a[i]<< " ";
    }
}
