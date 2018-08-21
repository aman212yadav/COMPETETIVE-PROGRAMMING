//problem written by Aman Yadav
//problem link https://www.codechef.com/problems/COMPILER/
#include<bits/stdc++.h>
using namespace std;
int main()
{int t,i;
 string s;
  cin>>t;
  while(t--)
  { cin>>s;
    int n=(int)s.size();
    stack<char> stk;
    int  count=0;
    bool p=true;
    for(i=0;i<n;i++)
    {
        if(s[i]=='<')
        {stk.push('<');
        }
        else
        {if(stk.empty())
            {cout<<count<<"\n";
             p=false;
              break;
            }
            else
            {stk.pop();
              if(stk.empty())
                count=i+1;
            }


        }
    }
    if(p)
            cout<<count<<"\n";

  }

}
