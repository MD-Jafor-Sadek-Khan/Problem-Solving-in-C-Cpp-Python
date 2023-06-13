#include <iostream>
using namespace std;
int main()
{
    string s;
    string ss;
    cin >> s;
    int len = s.size();
    int c_L = 0;
    int c_R = 0;
    int c = 0;

    for (int i = 0; i < len + 1; i++)
    {
        if (c_R == c_L && c_L != 0)
        {

            c_L = 0;
            c_R = 0;

            ss.push_back('\n');
            c++;
        }
        if (s[i] == 'L')
        {
            ss.push_back('L');
            c_L++;
        }

        else if (s[i] == 'R')
        {
            ss.push_back('R');
            c_R++;
        }
    }
    cout << c << endl;
    ss.pop_back();
    cout << ss;

    return 0;
}