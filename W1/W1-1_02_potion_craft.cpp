#include <iostream>

int main()
{
	constexpr int HERB_COUNT_PER_POTION = 3;
	constexpr int CRAFT_COST_PER_POTION = 20;

	int herbs = 0;

	std::cout << "Herbs: ";
	std::cin >> herbs;

	int potions = herbs / HERB_COUNT_PER_POTION;
	int leftoverHerbs = herbs % HERB_COUNT_PER_POTION;
	int craftingCost = potions * CRAFT_COST_PER_POTION;

	std::cout << "Potions: " << potions << "\n";
	std::cout << "Leftover herbs: " << leftoverHerbs << "\n";
	std::cout << "Crafting cost: " << craftingCost << "\n";
}