//Author: Trevor Owens
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstName;
  string lastName; 
  string nickname;
  char firstLetter;
  char lastNameLastLetter;
  int lucky;

  //get user input
cout << "What is your first name?\n";
cin >> firstName;
cout << "What is your last name?\n";
cin >> lastName;
  //tell fortune
  lucky = firstName.length();
cout << "Welcome, " << firstName [0] << "." << lastName [0] << "." << " ,here is your fortune...\n"; 
cout << "your lucky number is " << lucky << endl; 
 
firstLetter = firstName [0];
 if (firstLetter == 'a' || firstLetter == 'e' || firstLetter == 'i' || firstLetter == 'o' ||firstLetter == 'u' || firstLetter == 'A' || firstLetter == 'E' || firstLetter == 'I' || firstLetter == 'O' || firstLetter == 'U') 
 {
 cout << "you are destined to be famous!\n"; 
 }
else 
{
cout << "you should keep a low profile.\n";
}

lastNameLastLetter = lastName [lastName.length() - 1];
if (lastNameLastLetter == 'a' || lastNameLastLetter == 'e' || lastNameLastLetter== 'i' || lastNameLastLetter == 'o' || lastNameLastLetter == 'u' || lastNameLastLetter == 'A' || lastNameLastLetter == 'E' || lastNameLastLetter == 'I' || lastNameLastLetter == 'O' || lastNameLastLetter == 'U') 
{ 
cout << "you have already met your true love.\n";
}


cout << "have a good day!\n";

 return 0;
  }
