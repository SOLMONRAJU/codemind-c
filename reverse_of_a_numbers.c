#include<bits/stdc++.h> 
using namespace std; 
int main() {
int number,reverse; 
cin>>number; 

while(number!=0)
{
reverse=number%10;
cout<<reverse;
number=number/10;
}
return 0;
}
