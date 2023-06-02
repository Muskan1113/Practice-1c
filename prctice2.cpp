#include<bits/stdc++.h>
using namespace std;
/*
void printmusk(int x)
{
    cout<< "musk fav no. is"<<x<<endl;
}
 */
/* int addnumbers(int x, int y)
 //use any no. of parameters just remember to separate each parameter with comma
 {
    int answer= x+y;
    return answer;
    


 }

int main()
{
    cout<<addnumbers(24, 86);
    return 0;
    

}
*/
//class and object
/*
class muskanclass
{
    public:
     void muskiscool()
     {
        cout<< "muskan is learning coding"<<endl;
     }


};
int main()
{
    muskanclass muskanobject;
    muskanobject.muskiscool();
    return 0;
}
*/
/*class muskanclass
{
    public:
    string name;

};
int main()
{
    muskanclass tans;
    tans.name = "tanya sachan";
    cout<<tans.name;
    return 0;
}
*/
/*class muskanclass
{
    public:
     void setname(string x)
     {
        name = x;
     }
     string getname()
     {
        return name;
     }
    private:
    string name;

};
int main()
{
    muskanclass tans;
    tans.setname("tanya sachan");
    cout<<tans.getname();
    return 0;
}
*/
class muskanclass
{
    public:
     muskanclass(string z)
     {
     setname(z);
     
        
     }
     void setname(string x)
     {
        name = x;
     }
     string getname()
     {
        return name;
     }
    private:
    string name;

};
int main()
{
    muskanclass tans("tanya sachan");
    cout<<tans.getname()<<endl;

    muskanclass tans2("muskan sachan");
    cout<<tans2.getname();
    return 0;
}