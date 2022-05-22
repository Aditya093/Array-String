#include "iostream"
#include "string"
using namespace std;
int main()
{
    string s;
    char s1[]={"This"};
    char s2[]={"That"};
    //getline function to take string as input
    getline(cin,s);
    cout<<s<<endl;

    //size returns the size of the string
    int l=s.size();
    cout<<"The size of string is :"<<l<<endl;
    //appends add a string at the end of a string
    s.append("o");
    cout<<s<<endl;
    //concatenation using + operation in string
    s=s+",Everyone";
    cout<<s<<endl;
    //replace function replaces a string at specific index in a string.
    //first arguments takes position, second argument defines size of the string to be replaced
    //and last is the replacement string
    s.replace(5,3,"");
    cout<<s<<endl;
}