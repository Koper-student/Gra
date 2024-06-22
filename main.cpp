#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    // Inicjalizacja generatora liczb losowych
    srand(time(NULL));

    // Losowanie liczby z zakresu od 1 do 100
    int liczba_do_zgadniecia = rand() % 100 + 1;
    int zgadnij;
    int proba = 0;

    printf("Witaj w grze zgadywanie liczby!\n");
    printf("Wylosowana zostala liczba z zakresu od 1 do 100. Sprobuj ja zgadnac!\n");

    do {
        printf("Podaj swoja propozycja: ");
        scanf("%d", &zgadnij);
        proba++;

        if (zgadnij < liczba_do_zgadniecia) {
            printf("Za malo! Sprobuj jeszcze raz.\n");
        } else if (zgadnij > liczba_do_zgadniecia) {
            printf("Za duzo! Sprobuj jeszcze raz.\n");
        } else {
            printf("Gratulacje! Zgadles liczbe w %d probach.", proba);
        }
    } while (zgadnij != liczba_do_zgadniecia);

    return 0;
}
