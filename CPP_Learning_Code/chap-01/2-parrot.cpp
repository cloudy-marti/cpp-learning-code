// Implement the program here.
#include <iostream>

int main()
{
    int number = 0;

    using namespace std;
    cout << "Repeat only one number" << endl;
    cin >> number;
    cout << number << endl;

    cout << "Repeat infinite times until -1 with while" << endl;
    while(true)
    {
        number = 0;
        cin >> number;
        if(number==-1)
        {
            break;
        }
        cout << number << endl;
    }

    cout << "Repeat infinite times until -1 with do/while" << endl;
    number = 0;
    do
    {
        cin >> number; 
        cout << number << endl;
    }
    while(number != -1);

    cout << "Repeat 10 times" << endl;
    number = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> number;
        cout << number << endl;
    }

    return 0;
}