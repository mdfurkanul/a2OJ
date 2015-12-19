#include<iostream>
#include<map>
#include<iterator>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        char c2,c1;
            scanf("%d %c",&a,&c2);
            scanf("%d %c",&b,&c1);
            scanf("%d%*c",&c);
            if((c==(a+b) && c2=='+') || ((c==(a-b)) && c2=='-'))
               {
                   printf("Case %d: YES\n",i);
               }
            else
                printf("Case %d: NO\n",i);
    }

    return 0;
}