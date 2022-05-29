#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Number of Productions: ";
    cin >> n;
    string a[n];
    cin.ignore();
    for (int i = 0; i < n; i++){
        cout << "Production " << i + 1 << ": ";
        getline(cin, a[i]);
    }
    cout << "\nOutput: ";
    for (int j = 0; j < n; j++){
        int n = 0;
        cout << endl
             << "Production " << j + 1 << ": ";
        if (a[j][0] == a[j][3])
            cout << "Left Recursion.";
        else{
            for (int k = 4; k < a[j].length(); k++){
                if (a[j][k] == '|'){
                    if (a[j][k + 1] == a[j][0])
                        n++;
                }
            }
            if (n == 0)
                cout << "Not Left Recursion.";
            else
                cout << "Left Recursion.";
        }
    }
    cout << endl;
    return 0;
}
