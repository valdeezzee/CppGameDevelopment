// CppGameDevelopment.cpp : Defines the entry point for the console application.
//Hero Inventory

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
	//hero inventory 1.0
	/* 
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	int numItems = 0;
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "sheild";

	cout << "Your items:\n";

	for (int i = 0; i < numItems; i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade you sword for a battle axe.";
	inventory[0] = "battle axe";
	
	cout << "Your items:\n";

	for (int i = 0; i < numItems; i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "' has";
	cout << inventory[0].size() << " letters in it.\n";

	cout << "\nYou find a healing potion.";
	if (numItems < MAX_ITEMS)
	{
		inventory[numItems++] = "healing potion";
	}
	else
	{
		cout << "You have too many items and can't carry another.";
	}

	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; i++)
	{
		cout << inventory[i] << endl;
	}
	*/

	//Tic tac toe
	/*
	const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = {{'O', 'X', 'O'},
									{' ', 'X', 'X'},
									{'X', 'O','O' } };
	cout << "Here's the tic-tac-toe board:\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}

	cout << "\n'X' moves to the empty location.\n\n";
	board[1][0] = 'X';

	cout << "Now th tic-tac-toe board is:\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}

	cout << "\n 'X' wins!";
	*/

	//hero inventory 2.0 using vectorss stl library
	/*
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << "You have " << inventory.size() << "items.\n";

	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";
	cout << "\nYour items:\n";
	for (unsigned i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "'has";
	cout << inventory[0].size() << " letters in it.\n";

	cout << "\nYour sheild is destoryed in a fierce battle.";
	inventory.pop_back();
	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nYou were robbed of all your possessions by a thief.";
	inventory.clear();
	if (inventory.empty())
	{
		cout << "\nYou have nothing.\n";
	}
	else
	{
		cout << "\nYou have at least one items.\n";
	}
	*/

	//hero inventory 3.0 using iterators with vectors
	/*
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter !=  inventory.end(); iter++)
	{
		cout << *iter << endl;
	}

	cout << "\nYou trade your sword for a battle axe.";
	myIterator = inventory.begin();
	*myIterator = "battle axe";
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); iter++)
	{
		cout << *iter << endl;
	}

	cout << "\nThe item name '" << *myIterator << "' has ";
	cout << (*myIterator).size() << " letters in it.\n";

	cout << "\nThe item name '" << *myIterator << "' has ";
	cout << myIterator->size() << " letters in it.\n";

	cout << "\nYou recover a crossbow from a slain enemy.";
	inventory.insert(inventory.begin(), "crossbow");
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); iter++)
	{
		cout << *iter << endl;
	}

	cout << "\nYour armor is destroyed in a fierce battle.";
	inventory.erase((inventory.begin() + 2));
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); iter++)
	{
		cout << *iter << endl;
	}
	*/

	//Using algorithms
	vector<int>::const_iterator iter;

	cout << "Creating a list of score.";
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	cout << "\nHigh Score:\n";
	for (iter = scores.begin(); iter != scores.end(); iter++)
	{
		cout << *iter << endl;
	}

	cout << "\nFinding a score.";
	int score;
	cout << "\nEnter a score to find.";
	cin >> score;
	iter = find(scores.begin(), scores.end(), score);
	if (iter != scores.end())
	{
		cout << "Score found.\n";
	}
	else
	{
		cout << "Score not found.\n";
	}

	cout << "\nRandomizing scores.";
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(scores.begin(), scores.end());
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); iter++)
	{
		cout << *iter << endl;
	}

	cout << "\nSorting scores.";
	sort(scores.begin(), scores.end());

	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); iter++)
	{
		cout << *iter << endl;
	}

	
}

