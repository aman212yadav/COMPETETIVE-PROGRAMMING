// problem link      https://www.codechef.com/COOK97B/problems/BFTT/
//code written by AMAN YADAV ,codechef username aman212yadav
#include<bits/stdc++.h>
using namespace std;
int main()
{ long long t,i,temp,count,temp1,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        n++;
        temp=n;
        while(true)
        { temp1=temp;
        count=0;
            while(temp1>0)
            {
                count+=(temp1%10==3);
                temp1/=10;
            }
            if(count>=3)
                break;
            temp++;
        }
        cout<<temp<<"\n";


    }
}
