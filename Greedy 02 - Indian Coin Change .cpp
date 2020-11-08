#include<bits/stdc++.h>
using namespace std;

int change(int coins[],int n, int money)
{
    int ans=0;
    while(money>0)
    {
        int i=upper_bound(coins,coins+n,money)-1-coins;
        money=money-coins[i];
        ans++;
    }
    return ans;
}

int main()
{
    int money;
    cin>>money;
    int coins[]={1,2,5,10,20,50,100,500,2000};
    int n=sizeof(coins)/sizeof(int);
    cout<<change(coins,n,money);
    
    
}
