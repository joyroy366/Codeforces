#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string st="codeforces";
    for(int i=0; i<n; i++)
    {

        int a=0;
        char ch;
        cin>>ch;
        for(int j=0; j<st.size(); j++)
        {
            if(st[j]==ch)
            {
                a=1;
                break;
            }


        }
        if(a==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        a==0;
    }
}
