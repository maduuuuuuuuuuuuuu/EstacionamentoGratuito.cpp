/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   bool idoso;
   bool deficiente;
   
   cout << "Você tem 60 anos ou mais? (1 para sim 0 para não)" << endl;
   cin >> idoso;
   
   cout << "Você é deficiente? (1 para sim 0 para não)" << endl;
   cin >> deficiente;
   
   if(idoso == 1 || deficiente == 1){
       cout << "\n Você tem direito a estacionamento gratuito"
   }
   else{
        cout << "\n Você NÃo tem direito a estacionamento gratuito"
   }
   
    return 0;
}