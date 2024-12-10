#include <iostream>
using namespace std;

int main()
{
    for (int table = 2; table < 10; ++table)
    {
        for (int teb = 1; teb <= 10; ++teb)
        {
            cout << teb * table << " ";
        }
        cout << endl; 
    }

    return 0;
}
