
#include <iostream>

int main()
{
    int total = 0;
    for (int i = 1; i <= 100; ++i) {
        total += i;
    }
    std::cout << "Сума чисел від 1 до 100: " << total << std::endl;

}
