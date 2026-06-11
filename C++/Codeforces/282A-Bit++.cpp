#include <iostream>

int main () {
    int operations;
    std::cin >> operations;

    int num = 0;
    for (int i = 0; i < operations; i++) {
        std::string op;
        std::cin >> op;

        if (op[1] == '+') {
            num++;
        } else {
            num--;
        }
    }

    std::cout << num << std::endl;
    return 0;
}