#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void pass(int size) {
    char characters[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789!@#$%"};
    int rNum, x = 0;
    string password;
    srand(time(reinterpret_cast<time_t *>(x)));

    for (int j = 0; j < size;++j){
        for (int i = 0; i < 6;++i){
            rNum = rand() % 66 + 1;
            cout << characters[rNum];
        }
        if (j < (size -1) )
            cout << "-";
        ++x;
    }
};
int main()
{
    pass(3);
    return 0;
}