#include "inout.h"

int main() 
{
    setlocale(LC_ALL, "ru");
    vector<int> vec;
    read(vec);
    sort(vec.begin(), vec.end());
    print(vec);
    return 0;
}