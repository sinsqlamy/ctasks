#include <iostream>
#include <cmath>

int main() {
    int a = 0, b = 0, c = 0;
    double p = 0, s = 0;

    std::cin >> a >> b >> c;

    p = (a + b + c) / 2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));

    std::cout << p << std::endl;
    std::cout << s << std::endl;
    return 0;
}
