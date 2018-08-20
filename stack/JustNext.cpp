//solution written by Aman Yadav
// problem link https://www.spoj.com/problems/JNEXT/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,i,j;
    cin>>t;
    while(t--)
    { cin>>n;
      long long arr[n];
    for(i=0;i<n;i++)
         cin>>arr[i];
         vector<int> v;
         j=0;
    for(i=n-1;i>=0;i--)
    { if(!v.empty() && arr[i]<v[j-1])
        {
           sort(v.begin(),v.end());
           int id=upper_bound(v.begin(),v.end(),arr[i])-v.begin();
           long long temp=v[id];
           v[id]=arr[i];
           sort(v.begin(),v.end());
           for(j=0;j<i;j++)
            cout<<arr[j];
           cout<<temp;
           for(auto k:v)
            cout<<k;
            cout<<"\n";
            break;
        }
        else
        {v.push_back(arr[i]);
         j++;
        }

    }
    if(i==-1)
        cout<<-1<<"\n";
    }
}
