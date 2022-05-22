#include <algorithm>
#include "iostream"
#include "bitset"
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int bit=0;
        for(int j=0;j<n;j++)
        {
            int num;
            cin>>num;
            bit=bit|num;

        }
        string s= bitset<32>(bit).to_string();
        int ans=count(s.begin(),s.end(),'1');
        cout<<ans<<endl;
    }
}

