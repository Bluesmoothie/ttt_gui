#include "classes/ttt.hpp"

ttt::ttt(void) : game{{2,2,2},{2,2,2},{2,2,2}}, nextPlayer(false), finished(false) {(void) game; (void) finished; (void) winner;}

ttt::~ttt(void) {}

bool	ttt::getNextPlayer(void) const {
	return this->nextPlayer;
}

void	ttt::click(const int& i, const int& j) {
	if(this->game[i][j] == TTT_GAME_EMPTY) {
		this->game[i][j] = this->nextPlayer;
		this->nextPlayer = !this->nextPlayer;
	}
}

int		ttt::getCase(const int& i, const int& j) const {
	return this->game[i][j];
}