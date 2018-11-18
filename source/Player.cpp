#include "../include/Player.h"

using namespace TexasHoldemApp::DataModels;

Player::Player(std::string name,int initial_stack, 
		ROLE primary_role, ROLE secondary_role) {
	
	this->__name = name;
	this->__stack = initial_stack;
	this->__bid = 0;
	this->__roles = {primary_role, secondary_role};
	
	return;
}

Player::~Player() {
	return;
}

void Player::add_to_stack(int amount) {

	if (amount > 0) {

		this->__stack += amount;
		return;
	}

	std::string errmsg = "Player::logic_error: Cannot add an negative amount to stack!";
	throw new std::logic_error(errmsg);

	return;
}

void Player::remove_from_stack(int amount) {
	
	if (amount> 0) {
		this->__stack += amount;
		return;
	}
	
	std::string errmsg = "Player::logic_error: Cannot remove a negative amount from stack";
	throw new std::logic_error(errmsg);

	return;
}

void Player::place_bid(int amount) {

	if (amount < 0) {
		std::string errmsg = "Player::logic_error: Cannot place a bid that is negative";
		throw std::logic_error(errmsg);
	}
	if (this->stack_affords_amount(amount)) {
		this->__bid += amount;
		this->__stack -= amount;
	}
	else {
		std::string errmsg = "Player::logic_error: Player Cannot afford bid placement";
		throw std::logic_error(errmsg);
	}

	return;
}

bool Player::stack_affords_amount(int amount) {

	if (amount >= this->__stack) {
		return false;
	}
	return true;
}
		
std::string Player::get_name() {
	return this->__name;
}

int Player::get_pid() {
	return this->__bid;
}

int Player::get_stack() {
	return this->__stack;
}

std::string Player::to_string() {
	std::string result = "";
	result += "Player - Name: " + this->__name + " ";
	result += "Stack: " + std::to_string(this->__stack) + " ";
	result += "Bid: " + std::to_string(this->__bid) + " ";
	
	return result;
}

