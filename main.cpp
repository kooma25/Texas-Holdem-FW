#include <iostream>

#include "include/StandardDeck.h"
#include "include/PlayCard.h"
#include "include/TexasHoldemCommons.h"
#include "include/Player.h"

using namespace TexasHoldemApp::DataModels;

int main()
{
	StandardDeck deck;
	Player player1("Morso", 100, Player::ROLE::Dealer, Player::ROLE::Default);

	std::cout << deck.to_string() << std::endl;
	std::cout << "Size of deck " << deck.get_number_of_cards() << std::endl;

	std::cout << player1.to_string() << std::endl;

	return 0;
}
