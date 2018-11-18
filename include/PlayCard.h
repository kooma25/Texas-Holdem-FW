#ifndef PLAYCARD_H
#define PLAYCARD_H

/* 
 * Author: Pietari Poutiainen
 * Purpose: Provides a data model for the playing card in the Texas Holdem
 *			Application game.
 * Date: 11.17.2018
*/

namespace TexasHoldemApp {
namespace DataModels {

class PlayCard {

	public:
		
		enum class Suit {
			Diamonds,
			Hearts,
			Clubs,
			Spades
		};

		enum class Rank {
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

		PlayCard(Suit suit, Rank rank);
		~PlayCard();

		Suit get_suit();
		Rank get_rank();
	
	private:

		Suit __suit;
		Rank __rank;

};

}} //END namespaces

#endif
