//Author:
#include<iostream>

using namespace std;



int main()
{
char character;
char charactercapital;
char characterlowercase;


  cout<<"What character do you want to know about?\n";
  cin>> character;
   if(character>='A'&&character<='Z') 
   {

    charactercapital = character;
    cout<< charactercapital<< " is an upper case letter." <<endl;
    }
    else if(character>='a'&&character<='z')
    {
    characterlowercase = character;
    cout<< characterlowercase<< " is a lower case letter." <<endl;
    }
    else
    {
    cout<<character<< "Please start over with a letter." <<endl;
    }
    cout<< "The ASCII value is : " <<(int)character<<endl;


  return 0;
}
