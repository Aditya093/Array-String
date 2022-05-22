#include "iostream"
using namespace std;
int main()
{
    int arr[]={1,2,3};
    cout<<arr[-1]<<endl;
    cout<<arr[-3]<<endl;
    arr[-1]=1;
    cout<<arr[-1]<<endl;
}