#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    string a[n];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "String " << i + 1 << ": ";
        getline(cin, a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        int token = 1;
        cout << "\nFor String " << j + 1 << ": " << endl
             << "Token " << token << ": ";
        for (int k = 0; k < a[j].length(); k++)
        {
            if (a[j][k] == ' ')
            {
                token++;
                cout << endl
                     << "Token " << token << ": ";
            }
            else
                cout << a[j][k];
        }
        cout << endl;
    }
    return 0;
}
