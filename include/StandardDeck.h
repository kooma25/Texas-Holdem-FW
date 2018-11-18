#ifndef STANDARDDECK_H
#define STANDARDDECK_H
/*
 * Author: Pietari Poutiainen <pietari.poutiainen@gmail.com>
 * Purpose: Provides a standardized 52 card deck for use in the Texas Holdem base game rules.
 * Last Modified: 18.11.2018 <Author>
*/

#include "BaseDeck.h"
#include "../include/TexasHoldemCommons.h"

namespace TexasHoldemApp {
namespace DataModels {

class StandardDeck: public BaseDeck {

	public:

		StandardDeck();
		~StandardDeck();

		unsigned int get_number_of_cards();
		std::shared_ptr<PlayCard> take_top_card();	
		void place_top_card(std::shared_ptr<PlayCard> card);
		void shuffle();

		bool does_card_belong_to_me(std::shared_ptr<PlayCard> card);
		bool do_i_have_this_card(std::shared_ptr<PlayCard> card);

		std::string to_string();

	private:

		void __build_deck();

	std::vector<std::shared_ptr<PlayCard>> __all_my_cards;

};

}} // END namespaces

#endif // STANDARDDECK_H
