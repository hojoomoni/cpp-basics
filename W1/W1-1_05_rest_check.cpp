#include <iostream>

int main()
{
	constexpr int DANGER_HP_PERCENT = 30;
	constexpr int REST_NEEDED_HP_PERCENT = 50;
	constexpr int REST_NEEDED_MP_PERCENT = 20;
	constexpr int MP_COST_PER_SKILL = 10;
	constexpr int PERCENT_BASE = 100;

	int Hp = 0;
	int maxHp = 0;
	int Mp = 0;
	int maxMp = 0;

	std::cout << "HP: ";
	std::cin >> Hp;
	std::cout << "Max HP: ";
	std::cin >> maxHp;
	std::cout << "MP: ";
	std::cin >> Mp;
	std::cout << "Max MP: ";
	std::cin >> maxMp;

	double hpRate = static_cast<double>(Hp) * PERCENT_BASE / maxHp;
	double mpRate = static_cast<double>(Mp) * PERCENT_BASE / maxMp;
	std::cout << "HP rate: " << hpRate << "\n";
	std::cout << "MP rate: " << mpRate << "\n";

	bool isDanger = hpRate < DANGER_HP_PERCENT;
	bool needRest = hpRate < REST_NEEDED_HP_PERCENT || mpRate < REST_NEEDED_MP_PERCENT;
	bool canFight = !isDanger && Mp >= MP_COST_PER_SKILL;

	std::cout << "Danger: " << isDanger << "\n";
	std::cout << "Need rest: " << needRest << "\n";
	std::cout << "Can fight: " << canFight << "\n";
}