#include "student.h"

int main()
{
    Student vadim;
    cin >> vadim;
    cout << vadim;
    cout << endl;
    Student andrey;
    cin >> andrey;
    vadim = andrey;
    cout << vadim << endl;
}
