#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return(n*factorial(n-1));
}

void find_position(string word)
{
    int rank=0;
    char first=word[0];
    int count=0;
    for(int i=0;i<word.length();i++)
    {
        //cout<<"hi";
        if(first>word[i])
            count++;
    }
    //cout<<endl<<"count="<<count<<endl;
    //cout<<word.length()-1<<endl;
    //cout<<factorial(word.length()-1)<<endl;
    rank=count*factorial(word.length()-1);
    //cout<<rank;

    int rem=word.length()-1;
    while(rem!=1)
    {
        rank=rank+rem*factorial(rem-1);
        rem--;
    }
    cout<<endl<<"rank="<<rank;

}

int main()
{

    int n;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    string word;
    cin>>word;
    find_position(word);

    //find_position("string");
return 0;
}
