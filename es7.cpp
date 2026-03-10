#include <iostream>

int main() {
    int count = 0;
    int input;

    std::cout << "Inserisci numeri (inserisci -1 per terminare): ";
    while (std::cin >> input && input != -1) {
        count++;
    }

    std::cout << "Hai inserito " << count << " numeri." << std::endl;

    return 0;
}
