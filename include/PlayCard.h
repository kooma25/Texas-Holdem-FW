#ifndef PLAYCARD_H
#define PLAYCARD_H

/* 
 * Author: Pietari Poutiainen
 * Purpose: Provides a data model for the playing card in the Texas Holdem
 *			Application game.
 * Last modified: 11.18.2018 <Author>
*/

#include "../include/TexasHoldemCommons.h"

namespace TexasHoldemApp {
namespace DataModels {

class PlayCard {

	public:
		
		enum class SUIT {
			Diamonds,
			Hearts,
			Clubs,
			Spades
		};

		std::string SUIT_AS_STR[4] = {
			"Diamonds",
			"Hearts",
			"Clubs",
			"Spades"
		}; 

		enum class RANK {
			Ace,
			One,
			Two,
			Three,
			Four,
			Five,
			Six,
			Seven,
			Eight,
			Nine,
			Ten,
			Jack,
			Queen,
			King
		};

		std::string RANK_AS_STR[14] = {
			"Ace",
			"One",
			"Two",
			"Three",
			"Four",
			"Five",
			"Six",
			"Seven",
			"Eight",
			"Nine",
			"Ten",
			"Jack",
			"Queen",
			"King"
		};

		PlayCard(SUIT suit, RANK rank);
		~PlayCard();

		SUIT get_suit();
		RANK get_rank();
		std::string to_string();
	
	private:

		SUIT __suit;
		RANK __rank;

};

}} //END namespaces

#endif
