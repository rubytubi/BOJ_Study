#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        string a, b;
        cin >> a >> b;

        int d = 0;
        for (size_t j = 0; j < a.length(); ++j)
        {
            if (a[j] != b[j])
            {
                d++;
            }
        }

        cout << "Hamming distance is " << d << "." << endl;
    }

    return 0;
}