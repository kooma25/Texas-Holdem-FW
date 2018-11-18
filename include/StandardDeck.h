#ifndef STANDARDDECK_H
#define STANDARDDECK_H
/*
 * Author: Pietari Poutiainen <pietari.poutiainen@gmail.com>
 * Purpose: Provides a standardized 52 card deck for use in the Texas Holdem base game rules.
 * Last Modified By
*/

#include "BaseDeck.h"
#include "PlayCard.h"
#include <vector>

namespace TexasHoldemApp {
namespace DataModels {

class StandardDeck {

	public:

		StandardDeck();
		~StandardDeck();

		unsigned get_number_of_cards();

		PlayCard take_top_card();	
		
		void place_top_card(PlayCard card);

	private:

		void initialize_deck();

		std::vector<PlayCard> __cards;

};

}} // END namespaces

#endif // STANDARDDECK_H
