#include <cstdio>
#include <iostream>

int main() {
    unsigned int szerokosc = 0;
    unsigned int wysokosc;
    int input;
    
    do {
        std::cout << std::string("[*]: Podaj szerokosc tabelki: ");
        std::cin >> szerokosc;
        if(szerokosc == 0) {
            std::cerr << std::string("[-]: Szerokosc musi byc dodatnia!") << std::endl;
        }
    }
    while(szerokosc == 0);

    do {
        std::cout << "[*]: Podaj wysokosc tabelki: ";
        std::cin >> wysokosc;
        if(wysokosc == 0) {
            std::cerr << std::string("[-]: Wysokosc musi byc dodatnia!") << std::endl;
        }
    }
    while(wysokosc == 0);

    for(int wiersz = 1; wiersz <= szerokosc; wiersz++) {
        for(int kolumna = 1; kolumna <= wysokosc; kolumna++) {
            printf("%d\t", wiersz * kolumna);
        }
        printf("\n");
    }
    
    std::cin >> input;

    return 0;
}
