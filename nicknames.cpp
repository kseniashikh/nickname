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
   string real { "no realname" }
   int yob  { 0 };      // yob (year of birth) ist eine Variable von Typ int

   cout << "Nickname, echten Namen und Geburtsjahr eingeben";
   cin  >> nick >> real >> yob;	// lies die Zeichen in nick ein
   
   cout << "\n\t"; << "nick: " << nick;
   cout << "\n\t"; << "real: " << real;
   cout << "\n\t"; << "yob: " << yob "\n";
   
   
   //std::clog << "\n\n\t" << "nick ist: " << nick << "\n\tyob ist: " << yob << "\n\n";
   cout << "OK, \"" << nick << "\" ist also im Jahr " << yob << " geboren!\n\n";
   
   return 0;            // alles OK, return mit 0
}