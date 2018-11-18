#include <iostream>

#include "include/StandardDeck.h"
#include "include/PlayCard.h"
#include "include/TexasHoldemCommons.h"

using namespace TexasHoldemApp::DataModels;

int main()
{
	StandardDeck deck;
	std::shared_ptr<PlayCard> some_card = deck.take_top_card();

	std::cout << deck.to_string() << std::endl;
	std::cout << "Size of deck " << deck.get_number_of_cards() << std::endl;

	return 0;
}
