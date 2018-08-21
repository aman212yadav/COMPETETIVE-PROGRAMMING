#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> *g,int *visited,int start,stack<int> &st)
{  visited[start]=1;
   for(int i=0;i<g[start].size();i++)
      { if(!visited[g[start][i]])
          {dfs(g,visited,g[start][i],st);
          }
      }
    st.push(start);
}
void dfs1(vector<int>* gt,int start,int *visited,unordered_set<int> *s)
{  visited[start]=1;
   s->insert(start);
   for(int i=0;i<gt[start].size();i++)
      {if(!visited[gt[start][i]])
          dfs1(gt,gt[start][i],visited,s);
      }
}
unordered_set<unordered_set<int>*>* gss(vector<int> *g,vector<int> *gt,int n)
    {stack<int> st;
     int *visited=new int[n]();
     for(int i=0;i<n;i++)
     {if(!visited[i])
        dfs(g,visited,i,st);
     }
     for(int i=0;i<n;i++)visited[i]=0;
      unordered_set<unordered_set<int>* > *output=new unordered_set<unordered_set<int>* >();
      while(!st.empty())
      {int  e=st.top();st.pop();

       if(!visited[e])
         { unordered_set<int> *s=new unordered_set<int>;
           dfs1(gt,e,visited,s);
           output->insert(s);
         }
      }
      return output;
    }
int main()
{int n,m,a,b,i;
  cin>>n>>m;
  vector<int> g[n];
  vector<int> gt[n];
  for(i=0;i<m;i++)
     {cin>>a>>b;
      a--;b--;
      g[a].push_back(b);
      gt[b].push_back(a);
     }
     unordered_set<unordered_set<int>* > *s=gss(g,gt,n);
     unordered_set<unordered_set<int>* >::iterator p=s->begin();
     while(p!=s->end())
     {unordered_set<int> *q=*p;
        unordered_set<int>::iterator it=q->begin();
        while(it!=q->end())
           {cout<<*it+1<<" ";
            it++;
           }
           cout<<"\n";
           p++;
     }
}
