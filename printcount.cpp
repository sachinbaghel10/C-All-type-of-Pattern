#include<iostream>
using namespace std; 
 
int main()
{    int n = 10; 
    int count = 1; 
    for(int i =0; i<=n; i++)
    {
        for( int j=0; j<=i; j++)
        {
        // cout<<count<<" ";
        cout<<count<<" "; 
        count+=1; 
        }
       // count = count +1; 
        cout<<endl;
    }
}