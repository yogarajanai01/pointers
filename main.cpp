#include <iostream>

using namespace std;

class tables
{
public:

/*int table()
{
 int a,b,c;
cout << "Enter how many tables you want: ";
cin >> a;
cout << "Multiplication table upto \n",a;
for(b=1;b<=a;b++)
{
for(c=1;c<=10;c++)
cout <<b<<"*"<<c<<"="<<b*c << endl;
cout << "***************" << endl;
}
}*/
/*int names()
{
string firstname;
string lastname;
string name;
cout << "enter the firstname" ;
cin >> firstname;
cout << "enter the lastname" ;
cin >> lastname;
cout << firstname.append(lastname);
}*/

int pointers()
{
int a=10;
int b=20;
cout <<" value of a:" << a << endl;

int *p=&a;
cout << "address of pointer :\t" << p;
cout << "value in p :\t" << *p;




}

};

int main()
{
tables tb;
//tb.table();

//tb.names();

tb.pointers();
return 0;
}

