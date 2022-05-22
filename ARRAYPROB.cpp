#include "iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long n,sum=0;
        cin>>n;
        long arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            sum+=arr[j];
        }
        for(int j=0;j<n;j++)
        {
            arr[j]=sum-arr[j];
            cout<<arr[j]<<" ";
        }
        cout<<""<<endl;
    }

}

