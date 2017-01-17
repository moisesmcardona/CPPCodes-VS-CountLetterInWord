#include <iostream>
using namespace std;

int main()
{
	char wordarray[1][255];
	char letter;
	int foundtimes = 0;
	cout << "Enter a word: ";
	cin >> wordarray[0];
	cout << "Enter a letter: ";
	cin >> letter;
	int i = 0;
	while (wordarray[0][i] != '\0')
	{
		if (wordarray[0][i] == letter)
			foundtimes++;
		i++;
	}
	cout << "The word " << wordarray[0] << " has the letter " << letter << " " << foundtimes << " times" << endl;
	system("pause");
	return 0;
}