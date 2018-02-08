//Author: Pachia Vang 
#include<iostream>

using namespace std;

int main()
{
  char letter;
  cout<<"What character do you want to know about?\n";
  cin>>letter; 
if (letter >= 'A' && letter <= 'Z') 
{
  cout<< letter <<" is an upper case letter!\n";
}
 else if (letter >= 'a' && letter <= 'z')
 {
  cout<< letter << " is a lower case letter!\n";
}
else  
{
  cout<< letter << "?! Pssh. What are you talking about?\n";
 } 
 
  cout<<"The ASCII value is: " << (int) letter<<endl;

  return 0;
}
