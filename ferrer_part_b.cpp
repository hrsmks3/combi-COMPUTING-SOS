#include <iostream>
using namespace std;
long long int ncr(long long int n, long long int r)
{
    
    long long int temp;
    long long int pro1, pro2;
    pro1 = 1;
    pro2 = n;
    for(long long int j=1;j<r+1;j++)
    {
      pro2 = pro2*j; 
      
    }
    for(long long int j=1;j<r;j++)
    {
      pro1 = pro1*(n-j); 
      
    }

    temp = pro1/pro2;
    return temp;
}
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int q,r;
    if(n<2*k || n==2*k)
    {
        q = n;
    }
    else{ q=k;}
    cout<<q;
    //q is coming correct

    //had to think about r
    
    //long long int res[k-1];
  //   long long int sum = 0;
   
  //  cout<<ncr(n,k);
    // for(long long int i=2;i<k+1;i++)
    // {
    //    sum+= ncr(n-1,i-1);
    //    cout<<sum;
    // }
    
    

    return 0;
}