#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag=0;

for(int i=0; i<n; i++)
{
    if(n%i==0)
    {
        cout<<"number is  not prime"<<endl;
        flag=1;
        break;

    }
}

if(flag==0)
{
    cout<<"number is prime"<<endl;
}

    

 
}