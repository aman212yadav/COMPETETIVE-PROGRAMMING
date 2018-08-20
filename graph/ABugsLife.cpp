#include<bits/stdc++.h>
using namespace std;
bool bipartite(int i,vector<int> *p,int *visited,int n)
{ set<int> sets[2];
visited[i]=1;
  queue<int> q;
  q.push(i);
  sets[0].insert(i);
  while(!q.empty())
    {int temp=q.front(),cur;
       q.pop();
       if(sets[0].count(temp)>0)
       cur=0;
       else cur=1;
     for(int j=0;j<p[temp].size();j++)
         {if(sets[0].count(p[temp][j])==0 && sets[1].count(p[temp][j])==0)
            { visited[p[temp][j]]=1;
              q.push(p[temp][j]);
              sets[1-cur].insert(p[temp][j]);
            }
            else if(sets[cur].count(p[temp][j])>0)
            {  return false;
            }
         }
    }
    return true;
}
int main()
{int t,n,m,a,b,i,j;
cin>>t;
for(j=1;j<=t;j++){
   cin>>n>>m;
   vector<int> *g=new vector<int>[n];
   for(i=0;i<m;i++)
   {cin>>a>>b;
     a--;b--;
     g[a].push_back(b);
     g[b].push_back(a);
   }
   int *visited=new int[n]();
   for(i=0;i<n;i++)
   { if(!visited[i])
       { bool p=bipartite(i,g,visited,n);
         if(!p)
            {cout<<"Scenario #"<<j<<"\n"<<"Suspicious bugs found!\n";
            break;
            }
       }
   }
   if(i==n)
   cout<<"Scenario #"<<j<<"\n"<<"No suspicious bugs found!\n";


}

}
