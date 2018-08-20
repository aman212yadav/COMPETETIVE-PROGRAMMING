#include<bits/stdc++.h>
using namespace std;
int  v[100001]={};
void pre()
{ v[0]=v[1]=1;
 for(int i=2;i<=100000;i++)
    { if(v[i]==0)
        {
        for(int j=2*i;j<=100000;j+=i)
           {v[j]=1;
           }
        }
    }
}
void dfs(long long  a,vector<int> *p,long long  n,int *visited,long long  &length)
{ visited[a]=1;
  for(auto l:p[a])
    { if(!visited[l])
        {length++;
        dfs(l,p,n,visited,length);
        }
    }
}
int main()
{pre();
 long long n,m,t,a,b,i;
 cin>>t;
 while(t--)
 {cin>>n>>m;
   int *visited=new int[n]();
   vector<int> p[n];
   for(i=0;i<m;i++)
   {cin>>a>>b;
   a--;b--;
   p[a].push_back(b);
   p[b].push_back(a);
   }
     long long ma=-1;
     for(i=0;i<n;i++)
     { if(!visited[i])
         { long long length=1;
         dfs(i,p,n,visited,length);
         if(v[length]==0)
         ma=max(ma,length);
         }
     }
     cout<<ma<<"\n";
 }
}
