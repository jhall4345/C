#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 50;
int TotalPoints(int*, int);

struct Player
{
	char name[SIZE];
	int number;
	int points;
};

int main()
{
	const int NUM_PLAYERS = 12;

	Player* players = new Player[NUM_PLAYERS];
	int index;
	int total = 0;

//recieve player info
	for (index = 0; index < NUM_PLAYERS; index++)
	{
		cout << "Enter the Player's Name: ";
		cin.getline(players[index].name, 50);
		cout << "Enter the Player's Number: ";
		(cin >> players[index].number).get();
		cout << "Enter the Points Scored: ";
		(cin >> players[index].points).get();
		cout << endl << endl;
	}
//dispay player info
	cout << "    Name    Number    Score	" << endl;
	for (index = 0; index < NUM_PLAYERS; index++)
	{
		cout << setw(8) << players[index].name;
		cout << setw(8) << players[index].number;
		cout << setw(8) << players[index].points << endl;
	}

	//calculate total points
	for (index = 0; index < NUM_PLAYERS; index++)
	{
		total += players[index].points;
	}

	//find highest

	int max = players[0].points;
	int maxIndex = 0;
	for (int index = 0; index < 12; index++)
	{
		if (players[index].points > max)
		{
			max = players[index].points;
			maxIndex = index;
		}
	}

//display total and highest
	cout << "\n\nThe total of points scored by the team are: ";
	cout << total << endl;



	cout << players[maxIndex].name << ", number: " << players[maxIndex].number << " had the highest score." << endl;

	return 0;
}





