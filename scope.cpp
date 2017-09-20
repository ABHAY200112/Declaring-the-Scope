//Author :- Abhay Jeet Zutshi
#include<iostream>
using namespace std;

int main()
{     // Declaring the scope
int i = -1;
for(int i=0;i<=10;i++)
cout<<i<<" "<<&i<<endl;
cout<<i<<&i<<endl; 
return 1; // Returning the value
}

