#include "../include/PlayCard.h"

using namespace TexasHoldemApp;
using namespace DataModels;

PlayCard::PlayCard(Suit suit, Rank rank) {

	this->__suit = suit;
	this->__rank = rank;
}

PlayCard::~PlayCard() {

	return;
}

PlayCard::Rank PlayCard::get_rank() {

	return this->__rank;
}

PlayCard::Suit PlayCard::get_suit() {
	return this->__suit;
}

