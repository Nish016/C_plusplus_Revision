#include <iostream>
using namespace std;
class Employee
{
    string s;

public:
    void read(void);
    void check_binary(void);
    void ones_compliment(void);
    void display(void);
};

void Employee ::read(void)
{
    cout << "Enter the character: ";
    cin >> s;
}

void Employee ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary" << endl;
            exit(0);
        }
        else
            cout << "Binary";
        break;
    }
}

void Employee ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void Employee ::display(void)
{
    cout << "\nBinary number is:" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    Employee e;
    e.read();
    e.check_binary();
    e.display();
    e.ones_compliment();
    e.display();
    return 0;
}