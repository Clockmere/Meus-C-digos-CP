#include <iostream> 

using namespace std; 

int main () {
    int horas, minutos, segs, adiado;
    // adiado = segs
    cin >> horas >> minutos >> segs >> adiado;
    // 1 hr = 3600s == 60min
    // 1 min = 60s
    int total_segs = (horas*3600)+(minutos*60)+segs+adiado;

    total_segs %= 86400;

    horas = total_segs / 3600;
    total_segs %= 3600;

    minutos = total_segs / 60;
    segs = total_segs % 60;

    cout << horas << endl << minutos << endl <<
    segs << endl;
}