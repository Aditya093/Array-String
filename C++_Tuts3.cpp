//Iterating methods in string
#include "iostream"
#include "string"
#include "algorithm"
using namespace std;
void fn(char const &c)
{
    cout<<c;
}
int main()
{
    string s="This is a string";
    int l=s.size();
    //Method 1: Same old apdu index thi iterate karvanu
    for(int i=0;i<l;i++)
    {
        cout<<s[i];
    }
    cout<<""<<endl;
    //Method 2: It another method ahiya koi index ni jaroor nahi
    for(char c:s)
    {
        cout<<c;
    }
    string ::iterator it;
    cout<<""<<endl;
    //Method 3: Using iterator
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it;
    }
    cout<<""<<endl;
    //Method 4: Using a method in algorithm called for_each to iterate over a string
    for_each(s.begin(),s.end(),fn);
}
