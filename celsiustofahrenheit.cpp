#include <cstudio>
#include <cstdlub>
#include <iostream>
uing namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
//enter the temperature in Celsius
int celsius;
cout << "Enter the temperature in Celsius:";
cin>>celsius;

//calculate the conversion factor for celsius
//to fahrenheit
int factor;
factor=212-32;
//use the conversion factor to convert celsius into fahrenheit values
int fahrenheit;
fahrenheit=factor*celsius/100_32;

//output the results (followed by a newline)
cout << "Fahrenheit value is:";
cout << fahrenheit <<end1;

//wait until user is ready before terminating program
//to allow the user to see the program results
cout << "Press Enter to Continue..." <<end1;
cin.ignore(10, '\n');
cin.get();
return 0;
}
