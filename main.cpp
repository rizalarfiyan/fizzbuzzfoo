#include <iostream>
using namespace std;

#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

struct definition
{
    int number;
    char *text;
};

int main()
{
    cout << "---------------------------------------------------" << endl;
    cout << "------------------ Fizz Buzz Foo ------------------" << endl;
    cout << "--------------------- Program ---------------------" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "--- https://github.com/rizalarfiyan/fizzbuzzfoo ---" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << endl;

    int getLength;
    bool hasFound;
    char fizz[] = "Fizz";
    char buzz[] = "Buzz";
    char foo[] = "Foo";
    struct definition defs[3] = {
        {3, fizz},
        {5, buzz},
        {7, foo}
    };

    cout << "Masukkan nilai panjang looping: ";
    cin >> getLength;

    for (int idx = 1; idx <= getLength; idx++)
    {
        hasFound = false;
        for (int idxDef = 0; idxDef < ARRAY_SIZE(defs); idxDef++)
        {
            if (idx % defs[idxDef].number == 0)
            {
                cout << defs[idxDef].text;
                hasFound = true;
            }
        }
        if (!hasFound) cout << idx;
        cout << endl;
    }
}
