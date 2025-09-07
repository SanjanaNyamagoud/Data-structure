//Reverse a string using stack
#include<iostream>
#include<string.h>
using namespace std;
#include<stack>
void Reverse(char *c,int n)
{
    stack<char> s;
    //push operation
    for(int i=0;i<n;i++)
    {
        s.push(c[i]);
    }
    //pop operation
    for(int i=0;i<n;i++)
    {
        c[i]=s.top();
        s.pop();
    }
}
int main()
{
    char c[51];
    cout<<"Enter The string:";
    cin>>c;
    Reverse(c,strlen(c));
    cout<<"output:"<<c;
}
