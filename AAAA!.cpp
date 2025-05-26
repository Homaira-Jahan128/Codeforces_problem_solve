#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=1; i<s.size(); )
        {
            if(s[0]==s[i])
            {
                s.erase(0,1);
                i=1;
            }
            else
            {
      
                i++;
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}