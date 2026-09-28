#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string s;
    getline(std::cin, s);

    for (int i = 0; i < size(s); i++) {
        char letter = s[i];

        std::cout << letter;
        if (isalpha(letter)) {
            if (std::islower(letter)) {
                std::cout << (char)toupper(letter);
            } else {
                std::cout << (char)tolower(letter);
            }
        }
    }

    std::cout << std::endl;
}