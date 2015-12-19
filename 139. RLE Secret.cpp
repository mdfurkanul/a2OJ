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
    scanf("%d%*c",&n);
    while(n--){
    //template<class T>
    vector<char>get;
    vector<int>g;
    char ch,tm;
    int co=0;
    bool flag=true;
    do
    {
        scanf("%c",&ch);
        if(flag)
        {
        tm=ch;
        flag=false;
        }
        if(tm==ch)
          {
              co++;
          }
        else if(tm!=ch)
        {
            get.push_back(tm);
            g.push_back(co);
            co=1;
            tm=ch;
        }

    }while(ch!='\n');
    int k=get.size();
    for(int i=0;i<k;i++)
    {
        cout<<get[i]<<g[i];
    }
    cout<<endl;
    }

    return 0;
}