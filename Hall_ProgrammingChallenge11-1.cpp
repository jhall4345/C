//Jonathan Hall 11/7/2021

#include <iostream>
#include <cstring>
using namespace std;

int totalWords(char*);
const int SIZE = 1000;

int main() {
	char input[SIZE]; 

	cout << "Enter a sentence: ";
	cin.getline(input, SIZE);

	cout << "The total number of words contained in your sentence is " << totalWords(input) << endl;

	return 0;
}


int totalWords(char* word) {
	int count = 0;

	for (int i = 0; i < strlen(word); i++)
	{
		if ((word[0] != '0' && i == 0) || word[i] == ' ')
		{
			count++;
		}
	}
	return count;
}