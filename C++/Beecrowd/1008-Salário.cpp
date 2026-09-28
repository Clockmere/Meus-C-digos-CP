#include <iostream>

int main() {
    int num, horas;
    double sal_hr;
    std::cin >> num >> horas >> sal_hr;

    double salary = horas*sal_hr;

    std::cout << "NUMBER = " << num << "\n";
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}