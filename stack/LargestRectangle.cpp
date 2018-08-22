#include<bits/stdc++.h>
using namespace std;

int main()
{long long n,i,j;
   while(true)
      { cin>>n;
        if(!n)
          break;
          long long arr[n],temp,poped;
          for(i=0;i<n;i++)
             cin>>arr[i];
           stack<long long> s;
           long long ans=0;
           i=0;
           while(i<n)
             { if(s.empty()|| arr[s.top()]<=arr[i])
                  s.push(i++);
                else
                {
                    poped=s.top();
                      s.pop();
                 temp=arr[poped]*(s.empty()? i: (i-s.top()-1));
                 ans=max(ans,temp);}

             }
             while(!s.empty())
             {poped=s.top();
                s.pop();
                temp=arr[poped]*(s.empty()?i:(i-s.top()-1));
                ans=max(ans,temp);
             }
             cout<<ans<<"\n";

      }
}
