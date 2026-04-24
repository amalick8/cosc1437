#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Deck
{
private:
    vector<string> cards;

public:

    // fills the deck with all 52 cards
    Deck()
    {
        // hearts
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

        // diamonds
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

        // clubs
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

        // spades
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

    // shuffles the deck
    void shuffle()
    {
        srand(time(0));

        for (int i = 0; i < cards.size(); i++)
        {
            int r = rand() % cards.size();

            // swap
            string temp = cards[i];
            cards[i] = cards[r];
            cards[r] = temp;
        }
    }

    // deals a card and removes it from the deck
    string deal()
    {
        if (cards.size() == 0)
        {
            cout << "no cards left!" << endl;
            return "";
        }

        string card = cards[cards.size() - 1];
        cards.pop_back();
        return card;
    }

    // shows all the cards
    void display()
    {
        cout << "deck has " << cards.size() << " cards:" << endl;
        for (int i = 0; i < cards.size(); i++)
        {
            cout << "[" << cards[i] << "] ";
        }
        cout << endl;
    }
};

int main()
{
    Deck myDeck;

    myDeck.display();

    myDeck.shuffle();
    cout << "\nafter shuffle:" << endl;
    myDeck.display();

    // deal 5 cards
    cout << "\ndealing 5 cards..." << endl;
    for (int i = 0; i < 5; i++)
    {
        string c = myDeck.deal();
        cout << "got: [" << c << "]" << endl;
    }

    cout << "\nwhats left:" << endl;
    myDeck.display();

    return 0;
}