#include <iostream>
#include <cmath>


int main() {
    //1.	Ввести натуральные числа A, B и C. Если (A кратно B и B больше C), то вывести A/B+C,
    //                                          если A кратно B и B меньше C, то вывести A/B-C,
    //                                          в остальных случаях вывести (A+B)*C.
    int a = 0, b = 0, c = 0;

    std::cin >> a >> b >> c;
    std::cout << a << b << c << std::endl;

    if ((a % b == 0) && (b > c))
    {
        std::cout << (a/b+c) << std::endl;
    }
    else if ((a % b == 0) && (b < c))
    {
        std::cout << (a/b-c) << std::endl;
    }
    else
    {
        std::cout << ((a+b)*c) << std::endl;
    }

    //2.	Ввести натуральное число N, обозначающее номер месяца в году.
    //      Используя оператор switch вывести названия всех месяцев года.
    //      Предусмотреть обработку ошибочного ввода N.
    int n;
    n = 0;

    std::cin >> n;

    switch (n) {
        case 1: std::cout << "January" << std::endl;
            break;
        case 2: std::cout << "February" << std::endl;
            break;
        case 3: std::cout << "March" << std::endl;
            break;
        case 4: std::cout << "April" << std::endl;
            break;
        case 5: std::cout << "May" << std::endl;
            break;
        case 6: std::cout << "June" << std::endl;
            break;
        case 7: std::cout << "July" << std::endl;
            break;
        case 8: std::cout << "August" << std::endl;
            break;
        case 9: std::cout << "September" << std::endl;
            break;
        case 10: std::cout << "November" << std::endl;
            break;
        case 11: std::cout << "October" << std::endl;
            break;
        case 12: std::cout << "December" << std::endl;
            break;
        default: std::cout << "You write integer other then 1 to 12" << std::endl;
    }

    return 0;
}
