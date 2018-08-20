//solution written by Aman Yadav
//problem link https://www.spoj.com/problems/STPAR/
#include<bits/stdc++.h>
using namespace std;
int main()
{int n,i,j,ch;
while(true)
{cin>>n;
if(!n)break;
    stack<int> s1,s2;
   for(i=0;i<n;i++)
     { cin>>ch;
     if(s1.empty()||s1.top()>ch)
          s1.push(ch);
          else
          {while(!s1.empty() && s1.top()<ch)
              {s2.push(s1.top());
                s1.pop();
              }
              s1.push(ch);
          }
     }
     while(!s1.empty()){s2.push(s1.top());s1.pop();}
     bool check=true;
     while(!s2.empty())
       {if(s2.top()!=n)
           {check=false; break;}
        n--;
        s2.pop();
       }
       if(check)
       cout<<"yes\n";
       else
       cout<<"no\n";
}
}
