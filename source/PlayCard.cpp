#include "../include/PlayCard.h"

using namespace TexasHoldemApp;
using namespace DataModels;

PlayCard::PlayCard(SUIT suit, RANK rank) {

	this->__suit = suit;
	this->__rank = rank;
}

PlayCard::~PlayCard() {

	return;
}

PlayCard::RANK PlayCard::get_rank() {

	return this->__rank;
}

PlayCard::SUIT PlayCard::get_suit() {
	return this->__suit;
}

std::string PlayCard::to_string() {
	return RANK_AS_STR[(int)__rank] + " Of " + SUIT_AS_STR[(int)__suit];
}

