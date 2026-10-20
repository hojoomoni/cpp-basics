#include <iostream>

int main()
{
	constexpr int ENTRY_FEE = 500;
	constexpr int MIN_ENTRY_LEVEL = 30;
	constexpr int MIN_PARTY_SIZE_COUNT = 2;
	constexpr int MAX_PARTY_SIZE_COUNT = 4;

	int level = 0;
	int gold = 0;
	int partySize = 0;

	std::cout << "Level: ";
	std::cin >> level;
	std::cout << "Gold: ";
	std::cin >> gold;
	std::cout << "Party size: ";
	std::cin >> partySize;

	double feePerMember = static_cast<double>(ENTRY_FEE) / partySize;
	bool isLevelEnough = level >= MIN_ENTRY_LEVEL;
	bool isGoldEnough = gold >= ENTRY_FEE;
	bool isPartyMemberCountInRange = partySize >= MIN_PARTY_SIZE_COUNT && partySize <= MAX_PARTY_SIZE_COUNT;
	bool canEnter = isLevelEnough && isGoldEnough && isPartyMemberCountInRange;

	std::cout << "Fee per member: " << feePerMember << "\n";
	std::cout << "Level OK: " << isLevelEnough << "\n";
	std::cout << "Gold OK: " << isGoldEnough << "\n";
	std::cout << "Party OK: " << isPartyMemberCountInRange << "\n";
	std::cout << "Can enter: " << canEnter << "\n";
}