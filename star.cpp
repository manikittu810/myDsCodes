#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<t++<<" ";
        }
        cout<<'\n';
    }
    return 0;
}