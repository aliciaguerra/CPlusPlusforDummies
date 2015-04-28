//BoolTest-compare variables input from the keyboard and store the results off into
//a logical operator.
#include <cstudio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main (int nNumberofArgs, char* pszArgs[])
{
//set output format for bool variables
//to true and false instead
//of 0 and 1
cout.setf(cout.boolalpha);

//input two values
int nArg1;
cout <<"Input value 1:";
cin >> nArg1;

int nArg2;
cout <<"Input value: 2";
cin>>nArg2;

//compare the two variables and store the results
bool b;
b=nArg1==nArg2;

cout <<"The statement," <<nArg1
     <<"equals"         <<nArg2
     <<"is"             <<b
     <<"end1;
//waituntil user is ready before terminating program
//to allow the user to see the program results

cout <<"Press Enter to Continue..." <<end1;
cin.ignore(10, '\n');
cin.get();
return 0;
}
