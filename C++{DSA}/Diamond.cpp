#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the number of row for pattern:"<<endl;
     cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(;j<=n;j++)
        {
           cout<<"*";
        }
        for(;j<=n+i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(;j<=n;j++)
        {
           cout<<"*";
        }
        for(;j<=n+i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
