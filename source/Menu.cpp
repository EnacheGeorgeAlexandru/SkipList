#include "Menu.h"

void Menu::printOptions() {
    std::cout << "1.Insert\n"
              << "2.Search\n"
              << "3.Delete\n"
              << "4.Print\n"
              << "5.Insert elements from 0 to n \n"
              << "6.Delete a given range\n"
              << "7.Stop\n";
}
void Menu::insertMultiple(int n) {
    for (int i = 0; i <= n; i++)
        sl.insert(i);
}
void Menu::deleteRange(int i, int j) {
    for (int k = i; k <= j; k++)
        sl.erase(k);
}

Menu::Menu() : sl(0.5, INT_MIN) {}

void Menu::menuLoop() {
    while (true) {
        printOptions();
        int option;
        std::cin >> option;
        int n;
        switch (option)
        {
            case 1:
                std::cin >> n;
                sl.insert(n);
                break;
            case 2:
                std::cin >> n;
                sl.search(n);
                break;
            case 3:
                std::cin >> n;
                sl.erase(n);
                break;
            case 4:
                sl.print();
                break;
            case 5:
                std::cin >> n;
                insertMultiple(n);
                break;
            case 6:
                int i, j;
                std::cin >> i >> j;
                deleteRange(i, j);
                break;
            case 7:
                return;

            default:
                std::cout << "Wrong option\n";
                break;
        }
    }
}