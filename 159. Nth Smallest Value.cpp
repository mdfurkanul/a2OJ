#include<iostream>
#include<map>
#include<iterator>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a[10];
        for(int j=0;j<10;j++)
            cin>>a[j];
        sort(a,a+10);
        cout<<a[1]<<endl;
    }

    return 0;
}