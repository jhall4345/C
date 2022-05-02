//Program Challenge 4, Population Bar Chart
//Written by Jonathan Hall
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
	ifstream inputFile;
	int number;
	inputFile.open("people.txt");	//open data file
	cout << "PRAIRIEVILLE POPULATION GROWTH\n" << "(each * represents 1000 people)\n";	//title
	for (int y = 1900; y <= 2000; y = y + 20) //Calculations
	{
		cout << y << ' ';
		inputFile >> number;
		for (int i = 0; i < number; i += 1000)
		{
			cout << '*';
		}
		cout << endl;
	}
	inputFile.close();
	return 0;
}