# C_B_Greedy_Algorithms
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
    
    int dp[100000];
    memset(dp,0,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        
    
    string name;
    cin>>name;
    int rank;
    cin>>rank;
    dp[rank]++;
    }
    
    int actual_rank=1;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        while(dp[i])
        {
            sum+=abs(actual_rank-i);
            dp[i]--;
            actual_rank++;
        }
        
    }
    
    cout<<sum<<endl;
    }
    
    
    
}
