#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,count=0;
    cin>>x;
    while(x>0)
    {
        if(x%2==1)
        {
            count++;
            x=x-1;
        }

        else
        {
            x=x/2;
        }
    }

    cout<<count<<endl;

}
