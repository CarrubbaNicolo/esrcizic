//2. L’utente inserisce numeri finché non scrive -1. Alla fine il programma calcola la media
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int input;

    std::cout << "Inserisci numeri (inserisci -1 per terminare): ";
    while (std::cin >> input && input != -1) {
        numbers.push_back(input);
    }

    if (numbers.empty()) {
        std::cout << "Nessun numero inserito." << std::endl;
        return 0;
    }

    double sum = 0;
    for (int num : numbers) {
        sum += num;
    }

    double average = sum / numbers.size();
    std::cout << "La media dei numeri inseriti è: " << average << std::endl;

    return 0;
}
