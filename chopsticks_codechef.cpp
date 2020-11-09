# C_B_Greedy_Algorithms
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<n-1;)
    {
        if(abs(a[i]-a[i+1])<=k)
        {
            i+=2;
            ans++;
        }
        else
        {
            i++;
        }
    }
    cout<<ans<<endl;
}
