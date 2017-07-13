#include <iostream>

using namespace std;

int main ()
{
    int sum = 0;        // сумма простых чисел
    int devider = 0;    // делитель числа (должен быть равен 2)
    int counter = 0;    // счетчик найденных простых чисел

    for (int i = 2; ; ++i) {
        devider = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0)
                ++devider;
        }

        if (devider == 2) {
            sum += i;
            ++counter;
        }

        if (counter == 1000)
            break;
    }

    cout << sum << endl;

    return 0;
}