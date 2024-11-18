#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int k = 0; k < n; ++k) {

        string str;
        getline(cin, str);
        
        int f = str.find(' ');
        string origin = str.substr(0, f);
        
        int s = str.find(' ', f + 1);
        int i = stoi(str.substr(f + 1, s - f - 1));
        int j = stoi(str.substr(s + 1));

        string ret = origin.substr(0, i) + origin.substr(j);
        cout << ret << "\n";
    }

    return 0;
}
