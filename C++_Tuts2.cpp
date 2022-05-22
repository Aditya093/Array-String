#include "iostream"
#include "string"
using namespace std;
int main()
{
    string s1="Hi Hello";
    string s2="Hell";
    // find would return the starting index of where the substring was found in string
    int found=s1.find(s2);
    cout<<found<<endl;
    //add a character to the end of string
    s2.push_back('o');
    cout<<s2<<endl;
    //removes a charcter from the end of string
    s2.pop_back();
    cout<<s2<<endl;
    //begin is a pointer that points towards beginning of a string
    cout<<*s1.begin()<< endl;
    //end is a pointer that points towards end of a string which is a null character
    cout<<"This is null"+*s1.end()<< endl;
}