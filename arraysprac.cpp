#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    int musky[9];
    cout<<"muskan - sachan"<<endl;
    return 0;

    for(int x=0;x<=8;x++)
    {
        musky[x]= 99;
        cout<< x <<"  -----  "<< musky[x] <<endl;

    }

}
*/
int main()
{
    int musky[5]={20,10,16,43,5};
    int sum = 0;
    for(int x=0; x<5 ; x++)
    {
        sum += musky[x];
        cout<<sum<<endl;
    }
}