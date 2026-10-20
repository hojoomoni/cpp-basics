#include <iostream>

int main()
{
	constexpr int ENHANCEMENT_COST_BASE = 1000;
	constexpr int STAGE_COUNT_PER_EXTRA_STONE = 5;
	constexpr int MAX_STAGE = 15;
	constexpr int MIN_RISKY_STAGE = 5;
	constexpr int RISKY_SUCCESS_RATE = 10;
	constexpr int PERCENT_BASE = 100;

	int stage = 0;
	int gold = 0;
	int stones = 0;

	std::cout << "Stage: ";
	std::cin >> stage;
	std::cout << "Gold: ";
	std::cin >> gold;
	std::cout << "Stones: ";
	std::cin >> stones;

	int enhancementCost = (stage + 1) * ENHANCEMENT_COST_BASE;
	int neededStones = (stage / STAGE_COUNT_PER_EXTRA_STONE) + 1;
	double successRate = PERCENT_BASE / static_cast<double>(stage + 1);

	std::cout << "Cost: " << enhancementCost << "\n";
	std::cout << "Stones needed: " << neededStones << "\n";
	std::cout << "Success rate: " << successRate << "\n";

	bool canEnhance = gold >= enhancementCost && stones >= neededStones && stage < MAX_STAGE;
	bool isRisky = successRate < RISKY_SUCCESS_RATE || (stage >= MIN_RISKY_STAGE && stones == neededStones);

	std::cout << "Can enhance: " << canEnhance << "\n";
	std::cout << "Risky: " << isRisky << "\n";
}