#include "../include/StandardDeck.h"
#include <vector>

using namespace TexasHoldemApp;
using namespace DataModels;

StandardDeck::StandardDeck() {
	
	this->initialize_deck();
}

StandardDeck::~StandardDeck() {

	return;
}

PlayCard StandardDeck::take_top_card() {

	if (this->__cards.size() > 0) {
		
		PlayCard top_card = this->__cards.back();

		this->__cards.pop_back();

		return top_card;
	}
}

void StandardDeck::place_top_card(PlayCard card) {

	this->__cards.push_back(card);
}

unsigned StandardDeck::get_number_of_cards() {

	return this->__cards.size();

}

void StandardDeck::initialize_deck() {
	return;
}

