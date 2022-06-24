#include <iostream>
using namespace std;

int main()
{
	const int ALIENT_POINT = 150;
	int alientKilled = 10;
	int score = alientKilled * ALIENT_POINT;
	cout << "score: " << score << endl;
	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;
	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
	shipCost myShipCost = BOMBER_COST;
	cout << "\nTo upgrade my ship to a Cruiser will cost " << (CRUISER_COST - myShipCost) << " Resource Points.\n";
	return 0;
}