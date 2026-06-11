#include <iostream>
#include <iterator>
#include <string>
#include <vector>

int main () {
    int num;
    std::cin >> num;

    std::vector<std::string> words(num);
    for (int i = 0; i <= num-1; i++) {
        std::cin >> words[i];
    }

    for (int i = 0; i <= num-1; i++) {
        std::string word = words[i];

        int num_letters = std::size(word);
        if (num_letters > 10) {
            std::cout << word[0] << num_letters-2 << word[num_letters-1] << "\n";
        } else {
            std::cout << word << "\n";
        }
    }

    return 0;
}