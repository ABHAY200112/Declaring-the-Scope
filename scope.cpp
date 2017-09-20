//Author :- Abhay Jeet Zutshi
#include<iostream>
using namespace std;
int main()
{     // Declaring the scope
int i = -1;
for(int i=0;i<=10;i++)
cout<<i<<" "<<&i<<endl; // Print the Value of i from 1-10 and their address
cout<<i<<&i<<endl; // Print the Value of First i and their address 
return 1; // Returning the value
}

