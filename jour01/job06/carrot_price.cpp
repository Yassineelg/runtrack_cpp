#include <iostream>

int main() {
    double price_per_kilo, kilos, vat_rate, total_price;

    std::cout << "Enter the price per kilo of carrots (HT): ";
    std::cin >> price_per_kilo;

    std::cout << "Enter the number of kilos of carrots: ";
    std::cin >> kilos;

    std::cout << "Enter the VAT rate (e.g., 15 for 15%): ";
    std::cin >> vat_rate;

    total_price = price_per_kilo * kilos * (1 + vat_rate / 100);

    std::cout << "The total price (TTC) is: " << total_price << std::endl;

    return 0;
}