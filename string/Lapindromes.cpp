//solution written by Aman yadav, codechef username aman212yadav
// problem link https://www.codechef.com/problems/LAPIN
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int arr[26]= {},n=(int)s.size();
        if(n&1)
            for(i=0; i<n; i++)
            {
                if(i<n/2)
                    arr[s[i]-'a']++;
                if(i>n/2)
                    arr[s[i]-'a']--;
            }
        else
        {
            for(i=0; i<n; i++)
                if(i<n/2)
                    arr[s[i]-'a']++;
                else
                    arr[s[i]-'a']--;
        }
        for(i=0; i<26; i++)
            if(arr[i])
                break;
        if(i==26)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
