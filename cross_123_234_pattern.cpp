#include<iostream>
using namespace std; 
 
int main()
{    
    int n = 3; 


    for(int i = 1; i<=n; i++)
    {
        for( int j= 1; j<=n; j++)
        {   
            int ans = i+j-1; 
          cout<<ans<<"  "; 
        }
        cout<<endl; 
    }
}