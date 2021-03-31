#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//Function prototypes
int operation(int, int, char);

int main()
{
    int num1{};
    int num2{};
    char type{};
    cout << "Enter number 1: ";
    cin >> num1;
    cout << endl
         << "Enter number 2: ";
    cin >> num2;
    cout << endl
         << "Enter the operation that you need from the list *,+,-,/ : ";
    cin >> type;
    while (type != '*' && type != '+' && type != '-' && type != '/')
    {
        cout << endl
             << "Please enter valid operation, *,+,-,/: ";
        cin >> type;
        cout<<type;
    }
    cout << operation(num1, num2, type);
    return 0;
}

int operation(int a, int b, char type)
{
    switch (type)
    {
    case '*':
        return a * b;
        break;
    case '/':
        return a / b;
        break;
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    default:
        break;
    }
    return 1;
}