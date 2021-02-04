#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string original, reversed;

    cout << "Text: ";
    cin >> original;

    for (int i = original.length() - 1; i >= 0; i--)
    {
        reversed.push_back(original[i]);
    }

    if (original == reversed)
    {
        cout << "\nThe text is a palindrome";
    }
    else
    {
        cout << "\nThe text is not a palindrome";
    }
    return 0;
}