#include <iostream>
using namespace std;

int main()
{
    // int t;
    // cin>>t;
    // for(int i=0;i<t;i++)
    // {
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        long long int ind[n];
        long long int cnt=0;
        long long int l=0;
        for(long long int j=0;j<n;j++)
        {
            for(long long int k=j+1;k<n;k++)
            {
                if(a[j]>a[k])
                {
                    cnt++;
                    ind[l]=j+1;
                    ind[l+1]=k+1;
                    l=l+2;
                }
            }
        }
        cout<<cnt<<endl;
        long long int m=0;
        for(long long int i=0;i<cnt;i++)
        {
            
                cout<<ind[m]<<" ";
                cout<<ind[m+1]<<endl;
                m=m+2;
            
        }
    // }
    
   

    return 0;
}