#include <iostream>

int main()
{
    constexpr int POTION_PRICE = 50;

    int gold = 0;
    int quantity = 0;

    std::cout << "Gold: ";
    std::cin >> gold;

    std::cout << "Quantity: ";
    std::cin >> quantity;

    int totalPrice = POTION_PRICE * quantity;
    int remainingGold = gold - totalPrice;

    std::cout << "Total price: " << totalPrice << "\n";
    std::cout << "Remaining gold: " << remainingGold << "\n";
}