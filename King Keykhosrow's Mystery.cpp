#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,a,b;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        long long int n=max(a,b);
        while(n%b != n%a)
        {
            n++;

        }
        cout<<n<<endl;

    }
}
