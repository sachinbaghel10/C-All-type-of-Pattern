#include<iostream>
using namespace std; 
 
int main() 
{    
    char say = 'A';
    int n = 3; 
    for(int i =1; i<=n; i++)
    {   
        for(int j=1; j<=n; j++)
       {       //     A  B  C
              //       A  B  C
              //       A  B  C
              
              char abc= 'A'+j-1; 
              cout<<abc<<" "; 
             //abcdefghi
              char ans = say++; 
              cout<<ans<<"  "; 
        }
        cout<<endl ; 
       
    }


}