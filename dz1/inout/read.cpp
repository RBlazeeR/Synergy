#include "../inout.h"
void read(vector<int>& vec) 
{
    int n;
    cout << "Ведите размер вектора : ";
    cin >> n;
    cout << "Ведите числа вектора : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
}