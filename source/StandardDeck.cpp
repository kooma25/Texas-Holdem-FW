#include "../include/StandardDeck.h"

using namespace TexasHoldemApp;
using namespace DataModels;

StandardDeck::StandardDeck() {
	
	this->__build_deck();

	// reseed random and shuffle
	std::srand((unsigned) std::time(0));
	this->shuffle();
}

StandardDeck::~StandardDeck() {

	return;
}

unsigned StandardDeck::get_number_of_cards() {

	return this->_cards.size();
}

std::shared_ptr<PlayCard> StandardDeck::take_top_card() {

	if (this->_cards.size() > 0) {
		
		std::shared_ptr<PlayCard> top_card = this->_cards.back();
		this->_cards.pop_back();

		return top_card;
	}

	std::string errmsg = "StandardDeck::underflow_error: ";
	errmsg += "Trying to take a card when the deck is empty!";
	throw new std::underflow_error(errmsg);
}

void StandardDeck::place_top_card(std::shared_ptr<PlayCard> card) {


	bool card_belongs_to_me = this->does_card_belong_to_me(card);
	bool i_have_this_card = this->do_i_have_this_card(card);

	if (card_belongs_to_me && i_have_this_card) {

		this->_cards.push_back(card);
		return;
	}

	std::string errmsg = "StandardDeck::logic_error: ";
	errmsg += "Trying to add a card that is not from this deck!";
	throw new std::logic_error(errmsg);
}

void StandardDeck::shuffle() {

	std::random_shuffle(this->_cards.begin(), this->_cards.end());
}

bool StandardDeck::does_card_belong_to_me(std::shared_ptr<PlayCard> card) {
	
	std::vector<std::shared_ptr<PlayCard>>::iterator it;
	bool card_belongs_to_me = false;

	for(it = this->__all_my_cards.begin(); it != this->__all_my_cards.end(); ++ it) {
		if (*it == card) {
			card_belongs_to_me = true;
			break;
		}
	}

	return card_belongs_to_me;
}

bool StandardDeck::do_i_have_this_card(std::shared_ptr<PlayCard> card) {
	
	std::vector<std::shared_ptr<PlayCard>>::iterator it;
	bool i_have_this_card = false;

	for (it = this->_cards.begin(); it != this->_cards.end(); ++it) {
		if (*it == card) {
			i_have_this_card = true;
			break;
		}
	}

	return i_have_this_card;
}

std::string StandardDeck::to_string() {
	
	std::string result = "[ ";

	std::vector<std::shared_ptr<PlayCard>>::iterator it;
	
	for (it = this->_cards.begin(); it != this->_cards.end(); ++it) {
		result += (*it)->to_string() + ", ";
	}

	result += "]";

	return result;
}

void StandardDeck::__build_deck() {
	
	// Create all cards and mark them into the owned cards vector
	for (int suits = 0; suits < 4; ++suits) {

		for (int ranks = 0; ranks < 13; ++ranks) {

			PlayCard::RANK cards_rank = (PlayCard::RANK) ranks;
			PlayCard::SUIT cards_suit = (PlayCard::SUIT) suits; 
			std::shared_ptr<PlayCard> new_card = 
				std::make_shared<PlayCard>(cards_suit, cards_rank);
			this->__all_my_cards.push_back(new_card);
		}
	}

	this->_cards = this->__all_my_cards;
}

