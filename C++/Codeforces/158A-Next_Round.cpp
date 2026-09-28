#include <iostream>
#include <ostream>
#include <vector>

int main () {
    int num_participants;
    int specific_place;
    std::cin >> num_participants >> specific_place;

    int advance = 0;

    std::vector<int> scores (num_participants);
    for (int i = 0; i < num_participants; i++) {
        std::cin >> scores[i];
        if (scores[i] >= scores[specific_place-1] and scores[i] > 0) {
            advance++;
        }
    }

    std::cout << advance << std::endl;
    return 0;
}