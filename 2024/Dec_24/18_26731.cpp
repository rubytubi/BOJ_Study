#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    string str;
    cin >> str;

    unordered_set<char> eng;
    for (char c = 'A'; c <= 'Z'; ++c)
    {
        eng.insert(c);
    }

    for (char c : str)
    {
        eng.erase(c);
    }

    cout << *eng.begin() << "\n";

    return 0;
}
