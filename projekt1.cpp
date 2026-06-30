#include <iostream>

using namespace std;

int silnia(int n) {
    if (n <= 1) return 1;
    return n * silnia(n - 1);
}

bool czyPierwsza(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;

    int wyjscie;

    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Silnia" << endl;
        cout << "2. Czy liczba jest pierwsza" << endl;

        cin >> wyjscie;

        if (wyjscie == 1) {
            int liczba;
            cout << "Podaj liczbe: ";
            cin >> liczba;

            cout << "Silnia z " << liczba << " = " << silnia(liczba) << endl;
        }

        if (wyjscie == 2) {
            int liczba;
            cout << "Podaj liczbe: ";
            cin >> liczba;

            if (czyPierwsza(liczba)) {
                cout << "Liczba jest pierwsza" << endl;
            } else {
                cout << "Liczba nie jest pierwsza" << endl;
            }
        }

    } while (wyjscie != 0);

    return 0;
}
