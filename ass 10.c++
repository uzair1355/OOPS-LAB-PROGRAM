#include <iostream>
using namespace std;

int main(){
// Write a program that takes a single character as input from the user and uses a switch statement 
// to check if the character is a vowel (a, e, i, o, u for both uppercase and lowercase) or a 
// consonant. Print the result accordingly

int z;

    cout << "ENTER THE SINGLE CHARACTER TO CHECK VOWEL :\n 1 for  'A'or 'a'\n 2 for 'E'or 'e'\n 3 for 'I'or 'i'\n  4 for 'O'or 'o'   \n 5 for 'U'or 'u' \n";
    cin >> z;

    switch (z)
    {

    case 1:
        cout <<"this is vowel A or a";
        break;
    case 2:
      cout <<"this is vowel E or e";
        break;
    case 3:
      cout <<"this is vowel I or i";
        break;
    case 4:
      cout <<"this is vowel O or o";
        break;

    case 5 :
       cout <<"this is vowel U or u";
        break;

      default :
      cout <<"this is consonent";  
      break;
    }





}