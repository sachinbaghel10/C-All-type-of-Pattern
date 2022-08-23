#include<iostream>
using namespace std; 
 
int main() 
{
    char abc = 'A'; 
    int n = 3; 

    for(int i = 0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            char ans = abc + i + j ;
            cout<<ans<<" "; 

        }
        cout<<endl; 
    }
}