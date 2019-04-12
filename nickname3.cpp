/* nickname.cpp
   osk-2010
   Liest einen "Nickname" (Spitznamen) und das Geburtsjahr ein,
   gibt die beide eingelesenen Werte wieder aus. 
*/

#include <iostream>		// I/O-Streams aus der StdLib
using std::cin; 		// using-Deklaration fuer cin aus std
using std::cout; 		// using-Deklaration fuer cout aus std
#include <string>               // Strings aus der StdLib
using std::string; 		// using-Deklaration fuer string aus std

int main( ) 
{
   string nick { "no nickname" };// nick ist eine Variable vom Typ string
   string real { "no realname" };
   double yob  { 0 }; // yob (year of birth) ist eine Variable von Typ int
   double mob; //month of birth
   double yearnow {2019};
   double monthnow {4};

   cout << "Nickname, echten Namen, Geburtsjahr und Geburtsmonat eingeben\n";
   cin  >> nick >> real >> yob >> mob;	// lies die Zeichen in nick ein
   yob = yearnow - yob-1;
   mob = (12 - mob) + monthnow;
//   double months_ob = (yob-1) * 12 + mob;
//   double months_now = (yearnow-1) * 12 + monthnow;
   
   double age = (yob*12.0 + mob) / 12.0;
//   double age = (months_now - months_ob) / 12;
  
   cout << "\n\t" << "nick: " << nick;
   cout << "\n\t" << "real: " << real;
   cout << "\n\t" << "Current age: " << age << "\n";
   
//   cout << "\n\t" << "yob: " << yob;
//   cout << "\n\t" << "mob: " << mob << "\n";
   
   return 0;            // alles OK, return mit 0
}