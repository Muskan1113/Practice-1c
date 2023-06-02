/*#include<bits/stdc++.h>
#include<cmath>
using namespace std;*/

/*
int main()
{
   cout<<sqrt(64)<<endl;
   cout<<round(2.3);

}
*/

//switch statement
/*
int main()
{
    int day(8);
    switch (day)
    {
        case 1:
          cout<<"monday";
          break;

        case 2:
          cout<<"tuesday";
          break;

        case 3:
          cout<<"wednesday";
          break;

        case 4:
          cout<<"thursday";
          break;

        case 5:
          cout<<"friday";
          break;

        case 6:
          cout<<"saturday";
          break;

        case 7:
          cout<<"sunday";
          break;

        default:
          cout<<"happy weekend";
          
    }
}*/
//while loop
/*
{
    int i=1;
    while(i<8)
    {
        cout<<i<<endl;
        i++;
    }
}
*/
//do while loop
/*
{
    int i=0;
    do
    {
        cout<<i<<endl;
        i++;
    }
    
    while(i<6);
}
*/
//for loop
/*
{
    for(int i=0; i<6; i++)
    {
        cout<<i<<endl;
 
    }
}
*/
/*{
    for(int i=0; i<8 ;i++)
    {
        if(i==5)
        {
            continue;
        }
        cout<<i<<endl;
    }
}*/
/*{
    for(int i=0; i<10 ;i++)
    {
        if(i==4)
        {
            break;
        }
        

      cout<<i<<endl;  
    }
}*/
//class and objects
/*#include<bits/stdc++.h>
using namespace std;

class Add
{
  public:
       int add(int x, int y)
       {
        return{x+y};
       }
       int add(int x, int y, int z)
       {
        return{x+y+z};
       }

};

int main()
{
  Add obj;
  int res1, res2;
  res1=obj.add(5,6);
  res2=obj.add(8,9,10);
  cout<<res1<<endl<<""<<res2<<endl;
  return 0;
}*/
// pattern question
// rectangular pattern
/*
#include<bits/stdc++.h>
using namespace std;
int main()

{
  int row;
  int column;
  cin>>row>>column;

  for(int i=0;i< row;i++)
  {
    for(int j=0; j<column;j++)
    {
      cout<<"*";

    }
    cout<<endl;
    
    

  }
}*/

//hollow rectangular
/*#include<bits/stdc++.h>
using namespace std;
int main()

{
  int row;
  int column;
  cin>>row>>column;

  for(int i=1;i< row;i++)
  {
    for(int j=1; j<column;j++)
    {
      if(i==1|| i==row-1)
      {
        cout<<"*";
      }
      else if(j==1 || j==column-1)
      {
        cout<<"*";
      }
      else
      {
        cout<<" ";
      }

    }
    cout<<endl;
    
    

  }
}*/

//inverted half pyramid
/*#include<bits/stdc++.h>
using namespace std;
int main()

{
  int m;
  
  cin>>m;

  for(int i=m;i>=0;i--)
  {
    for(int j=0;j<i;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;

}*/
//inverted half pyramid after rotation
/*#include<bits/stdc++.h>
using namespace std;
int main()

{
  int m;
  
  cin>>m;

  for(int i=0;i<=m;i++)
  {
    for(int j=0;j<=m;j++)
    {
      if(j<m-i)
      {
        cout<<" ";
      }
      else
      {
        cout<<"*";
      }
    }
    cout<<endl;
  }
  return 0;

}*/
//half pyramid using numbers
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
  int m;
  cin>>m;
  for(int i=0;i<=m;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<i<<" ";

    }
    cout<<endl;
  }
}*/
//floyds triangle
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
  int m;
  cin>>m;
  int count=1;
  for(int i=0;i<=m;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<count;
      count++;

    }
    cout<<endl;
  }
}*/
//butterfly pattern
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int m;
  cin >> m;

  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    int space = 2 * m - 2 * i;
    for (int j = 1; j <= space; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = m; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    int space = 2 * m - 2 * i;
    for (int j = 1; j <= space; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}

