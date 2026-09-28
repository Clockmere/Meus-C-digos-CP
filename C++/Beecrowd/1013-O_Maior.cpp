#include <algorithm>
#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int maior = std::max({a, b ,c});
    
    std::cout << maior << " eh o maior\n";

    return 0;
}