#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter array sizes: ";
    cin >> m >> n;
    int a[n], b[n];
    cout << "Enter array 1:- \n";
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cout << "Enter array 2:- \n";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    unordered_set<int> s;
    s.insert(a, a + m);
    s.insert(b, b + n);

    cout << "Union Set:- \n";
    cout << "Size: " << s.size() << endl;
    for (auto const &i : s)
    {
        cout << i << " ";
    }
    return 0;
}