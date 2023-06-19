#include "../inout.h"
void print(const vector<int>& vec) 
{
    cout << "Отсортированный вектор : ";
    for (auto i : vec) 
    {
        cout << i << " ";
    }
    cout << endl;
}