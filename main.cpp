#include <iostream>

#include "source/Deck.cpp"

int main()
{
	Deck deck;
	int num = deck.get_numbet_of_cards();
	std::cout << "Number of cards in Deck: " << num << std::endl;
	return 0;
}
