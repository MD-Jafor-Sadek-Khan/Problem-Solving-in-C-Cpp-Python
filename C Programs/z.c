#include<iostream.h>

using namespace std;

int main()
{
    int n, k, b[100000], a[100000], cnt = 0, flag = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++)
    {
        if(b[i] == b[i+1]) cnt++;
        else cnt = 0;
        if(cnt == k-1)
        {
            a[i] = 100000;
            flag++;
        }
        else a[i] = b[i];
    }
    cout << flag << endl;
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
