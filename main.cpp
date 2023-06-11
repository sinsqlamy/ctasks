#include <iostream>

int main() {
    // Дана последовательность натуральных чисел {Aj}.
    // Hайти произведение чисел, заканчивающихся цифрой 2 или 4,
    // наименьшее из таких чисел и номер этого числа в последовательности.

    int n;
    std::cin >> n;
    int arr[10];
    int powN = 1;
    int minN = INT_MAX;
    int minIndex;

    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];

        int lastDigit = arr[i] % 10;

        if (lastDigit != 0 &&
            (lastDigit == 2 || lastDigit == 4))
        {
            powN *= arr[i];
        }

        if (lastDigit == 2 || lastDigit == 4)
        {
            if (arr[i] < minN)
            {
                minN = arr[i];
                minIndex = i;
            }
        }
    }

    std::cout << powN << " " << minN << " " << minIndex+1 << std::endl;

    return 0;
}