#include <iostream>

int main() {
    int sum = 0;
    int input;

    std::cout << "Inserisci numeri (inserisci 0 per terminare): ";
    while (std::cin >> input && input != 0) {
        if (input % 2 != 0) {
            sum += input;
        }
    }

    std::cout << "La somma dei numeri dispari inseriti è: " << sum << std::endl;

    return 0;
}