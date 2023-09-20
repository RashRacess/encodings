#include "func.h"

//различные методы кодирования и декодирования информации 

int main()
{   
    //замена букв на цифры

    string s = MyCodeShifr("abcd");
    cout << endl << s << endl;
    cout << MyCodeDeshifr(s);


    return 0;
}
