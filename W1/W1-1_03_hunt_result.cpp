#include <iostream>

int main()
{
	constexpr int XP_PER_LEVEL = 1000;

	int killCount = 0;
	int totalXP = 0;

	std::cout << "Kills: ";
	std::cin >> killCount;
	std::cout << "Total exp: ";
	std::cin >> totalXP;

	double averageXPPerKill = static_cast<double>(totalXP) / killCount;
	int gainedLevelCount = totalXP / XP_PER_LEVEL;
	int remainingXP = totalXP % XP_PER_LEVEL;

	std::cout << "Average exp per kill: " << averageXPPerKill << "\n";
	std::cout << "Levels gained: " << gainedLevelCount << "\n";
	std::cout << "Leftover exp: " << remainingXP << "\n";
}