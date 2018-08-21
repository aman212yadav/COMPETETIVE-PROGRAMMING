//problem written by Aman Yadav
// problem link https://www.spoj.com/problems/MMASS/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long  n=s.size(),i,sum=0,small,j;
    stack<long long > stk;
    map<char,int> m;
    m['C']=12;
    m['H']=1;
    m['O']=16;
    m['(']=50;
    for(i=0; i<n; i++)
    {
        if(s[i]=='C'||s[i]=='O'||s[i]=='H'||s[i]=='(')
            stk.push(m[s[i]]);
        else if(s[i]==')')
        {
            small=0;
            while(!stk.empty() && stk.top()!=50)
            {
                small+=stk.top();
                stk.pop();
            }
            stk.pop();

            if(i+1<n && isdigit(s[i+1]))
              {small=small*(s[i+1]-'0'); i++;
             }
            stk.push(small);
        }
        else
        {

            long long c=stk.top();
            stk.pop();
            c=c*(s[i]-'0');
            stk.push(c);

        }

    }
    while(!stk.empty())
    {
        sum+=stk.top();
        stk.pop();
    }
    cout<<sum<<"\n";
}
