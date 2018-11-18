#ifndef BASEDECK_H
#define BASEDECK_H
/*
 * Author: Pietari Poutiainen
 * Purpose: Provides a datamodel for the deck in the Texas Holdem Application 
 * Last Modified: 11/18/2018 <Author>
*/

#include "PlayCard.h"
#include "../include/TexasHoldemCommons.h"

namespace TexasHoldemApp {
namespace DataModels {

class BaseDeck {

	public:

		virtual unsigned int get_number_of_cards() = 0;

		virtual std::shared_ptr<PlayCard> take_top_card() = 0;

		virtual void place_top_card(std::shared_ptr<PlayCard> card) = 0;
	
	protected:

		std::vector<std::shared_ptr<PlayCard>> _cards;
};

}} // END namespaces

#endif
