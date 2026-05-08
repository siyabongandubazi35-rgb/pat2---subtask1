#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{


 string A = ".-" ;
 string B ="-..." ;
 string C ="-.-." ;
 string D ="-.." ;
 string E ="." ;
 string F ="..-.";
 string G ="--." ;
 string H ="...." ;
 string I =".." ;
 string J =".---" ;
 string K ="-.-" ;
 string L =".-.." ;
 string M ="--" ;
 string N ="-." ;
 string O ="---" ;
 string P =".--." ;
 string Q ="--.-" ;
 string R =".-." ;
 string S ="..." ;
 string T ="-" ;
 string U ="..-" ;
 string V ="...-" ;
 string W =".--" ;
 string X ="-..-" ;
 string Y ="-.--" ;
 string Z ="--.." ;



    string message;
    cout << "ener a message:";
    getline(cin, message);

    cout << "\nMorse Code:\n";

    // loop through each character or letter

    for (char ch : message )
    {

        ch = toupper(ch);
        if (ch=='A')
        {
            cout<< "A:"<< A << endl;

        }else if (ch == 'B')
    {
        cout <<"B:"<< B << endl;
    } else if ( ch == 'C')
    {
        cout << "C:"<<C<< endl;

    } else if ( ch == 'D')
    {
        cout << "D:" << D<< endl;
    }  else if ( ch == 'E')
    {
        cout << "E:"<< E <<  endl;
    } else if ( ch == 'F' )
    {
        cout << "F:"<< F<< endl;
    } else if ( ch == 'G')
    {
        cout << "G:" << G << endl;
    }else if ( ch == 'H')
    {
        cout << "H:"<< H << endl;
    } else if ( ch == 'I')
    {
        cout << "I:"<< I << endl;
    } else if ( ch == 'J')
    {
        cout << "J:" << J << endl;
    } else if ( ch == 'K')
    {
        cout << "K:" << K << endl;
    } else if (ch =='L')
    {
        cout << "L:"<< L<< endl;
    } else if (ch == 'M')
    {
        cout << "M:" << M << endl;
    } else if (ch == 'N')
    {
        cout << "N:"<< N << endl;
    } else if (ch == 'O')
    {
        cout << "O:" << O << endl;
    } else if ( ch == 'P')
    {
        cout << "P:" << P << endl;
    } else if ( ch == 'Q')
    {
        cout << "Q:" << Q<<endl;
    } else if ( ch == 'R')
    {
        cout << "R:" << R<< endl;
    } else if ( ch =='S')
    {
        cout << "S:"<< S<< endl;
    } else if (ch == 'T')
    {
        cout <<  "T:" << T<< endl;
    } else if ( ch == 'U' )
    {
        cout << "U:"<< U << endl;
    } else if ( ch == 'V')
    {
        cout << "V:" << V << endl;
    } else if ( ch == 'W')
    {
        cout << "W:" << W<< endl ;

    } else if (ch == 'X')
    {
        cout << "X:"<< X << endl;
    } else if (ch == 'Y')
    {
        cout << "Y:" << Y << endl;
    } else if ( ch == 'Z')
    {
        cout << "Z:" << Z << endl;
    }

} return 0;
}

