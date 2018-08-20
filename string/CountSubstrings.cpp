#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {cin>>n;
    string s;
    cin>>s;
    int count1=count(s.begin(),s.end(),'1');
    cout<<count1+(count1*(count1-1)/2)<<"\n";
    }
}
