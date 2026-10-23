#include <iostream> 

using namespace std; 

int main () {
    int roupas;
    int lav_min, lav_max;
    int sec_min, sec_max;
    cin >> roupas;
    cin >> lav_min >> lav_max;
    cin >> sec_min >> sec_max;

    bool lavar = roupas >= lav_min && roupas <= lav_max;
    bool secar = roupas >= sec_min && roupas <= sec_max;

    if (lavar && secar) {
        cout << "possivel" << endl;
    } else {
        cout << "impossivel" << endl;
    }

    return 0;
}