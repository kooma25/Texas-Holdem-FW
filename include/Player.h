#ifndef PLAYER_H
#define PLAYER_H

#include "../include/TexasHoldemCommons.h"

namespace TexasHoldemApp {
namespace DataModels {

class Player {

	public:

		enum class ROLE {
			Default,
			Dealer,
			Big_Blind,
			Small_Blind
		};

		std::string ROLE_TO_STR[4] = {
			"Default",
			"Dealer",
			"Big Blind",
			"Small Blind"
		};

		Player(std::string name, int initial_stack = 0,
				ROLE primary_role = ROLE::Default,
				ROLE secondary_role = ROLE::Default);
		~Player();

		void add_to_stack(int amount);

		void remove_from_stack(int amount);

		void place_bid(int amount);

		bool stack_affords_amount(int amount);

		std::string get_name();
		int get_pid();
		int get_stack();

		std::string to_string();
	
	private:
		int __stack;
		int __bid;

		std::string __name;

		std::array<ROLE, 2> __roles;
		
};

}} // end namespaces

#endif
