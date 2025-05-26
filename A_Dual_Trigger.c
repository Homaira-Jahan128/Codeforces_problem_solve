#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int n,i;
       scanf("%d",&n);

       char s[n+1];
       scanf("%s",s);
       int cnt=0;
       for(i=0;i<n;i++)
       {
           if(s[i]=='1')
            cnt++;
       }
        //printf("%d",cnt);
        int x=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='1')
            x=1;
        }

       
       if((x==1 && cnt==2) || cnt%2!=0)
       {
           printf("NO\n");
       }
       else printf("YES\n");

    }

    return 0;

    }