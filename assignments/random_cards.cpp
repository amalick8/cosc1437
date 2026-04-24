#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Deck {
private:
	vector<string> cards;

public:
	Deck() {
		//hearts
		cards.push_back("2H");
		cards.push_back("3H");
		cards.push_back("4H");
		cards.push_back("5H");
		cards.push_back("6H");
		cards.push_back("7H");
		cards.push_back("8H");
		cards.push_back("9H");
		cards.push_back("10H");
		cards.push_back("JH");
		cards.push_back("QH");
		cards.push_back("KH");
		cards.push_back("AH");
		//dimonds
		cards.push_back("2D");
		cards.push_back("3D");
		cards.push_back("4D");
		cards.push_back("5D");
		cards.push_back("6D");
		cards.push_back("7D");
		cards.push_back("8D");
		cards.push_back("9D");
		cards.push_back("10D");
		cards.push_back("JD");
		cards.push_back("QD");
		cards.push_back("KD");
		cards.push_back("AD");
		//clubs
		cards.push_back("2C");
		cards.push_back("3C");
		cards.push_back("4C");
		cards.push_back("5C");
		cards.push_back("6C");
		cards.push_back("7C");
		cards.push_back("8C");
		cards.push_back("9C");
		cards.push_back("10C");
		cards.push_back("JC");
		cards.push_back("QC");
		cards.push_back("KC");
		cards.push_back("AC");
		//spades
		cards.push_back("2S");
		cards.push_back("3S");
		cards.push_back("4S");
		cards.push_back("5S");
		cards.push_back("6S");
		cards.push_back("7S");
		cards.push_back("8S");
		cards.push_back("9S");
		cards.push_back("10S");
		cards.push_back("JS");
		cards.push_back("QS");
		cards.push_back("KS");
		cards.push_back("AS");
	}

	void shuffle() {
		srand(time(0));
		for (int i = 0; i < cards.size(); i++) {
			int r = rand() % cards.size();
			string temp = cards[i];
			cards[i] = cards[r];
			cards[r] = temp;
		}
	}

	string deal() {
		if (cards.size() == 0) {
			cout << "deck is empty" << endl;
			return "";
		}
		string card = cards[cards.size() - 1];
		cards.pop_back();
		return card;
	}

	void display() {
		cout << "cards left: " << cards.size() << endl;
		for (int i = 0; i < cards.size(); i++) {
			cout << "[" << cards[i] << "] ";
		}
		cout << endl;
	}
};

int main() {

	Deck myDeck;
	myDeck.shuffle();
	myDeck.display();

	cout << endl;

	//deal some cards
	string c1 = myDeck.deal();
	cout << c1 << endl;
	string c2 = myDeck.deal();
	cout << c2 << endl;
	string c3 = myDeck.deal();
	cout << c3 << endl;
	string c4 = myDeck.deal();
	cout << c4 << endl;
	string c5 = myDeck.deal();
	cout << c5 << endl;

	cout << endl;
	myDeck.display();

	return 0;
}