/*
n=5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    int i=0;
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
}