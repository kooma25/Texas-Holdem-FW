#ifndef BASEDECK_H
#define BASEDECK_H
/*
 * Author: Pietari Poutiainen
 * Purpose: Provides a datamodel for the deck in the Texas Holdem Application 
 * Last Modified: 12.07.2018i
*/

#include "PlayCard.h"

namespace TexasHoldemApp {
namespace DataModels {

class BaseDeck {

	public:

		virtual unsigned get_numbet_of_cards() = 0;

		virtual PlayCard take_top_card() = 0; 

		virtual void place_top_card(PlayCard card) = 0;
};

}} // END namespaces

#endif
