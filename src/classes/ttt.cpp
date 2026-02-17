#include "classes/ttt.hpp"

ttt::ttt(void) : game{{2,2,2},{2,2,2},{2,2,2}}, nextPlayer(false), finished(false) {(void) game; (void) finished; (void) winner;}

ttt::~ttt(void) {}

void	ttt::checkGame(void) {
	for (int i = 0; i < 3; i++) {
		if (this->game[i][0] != TTT_GAME_EMPTY && this->game[i][0] == this->game[i][1] && this->game[i][0] == this->game[i][2])
		{
			this->gameFinished(this->game[i][0]);
			return;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (this->game[0][i] != TTT_GAME_EMPTY && this->game[0][i] == this->game[1][i] && this->game[0][i] == this->game[2][i]) {
			this->gameFinished(this->game[i][0]);
			return;
		}
	}
	if (this->game[0][0] != TTT_GAME_EMPTY && this->game[0][0] == this->game[1][1] && this->game[0][0] == this->game[2][2]) {
		this->gameFinished(this->game[0][0]);
		return;
	}
	if (this->game[0][2] != TTT_GAME_EMPTY && this->game[0][2] == this->game[1][1] && this->game[0][2] == this->game[2][0]) {
		this->gameFinished(this->game[0][0]);
		return;
	}
}

void	ttt::gameFinished(const int& winner) {
	this->finished = true;
	this->winner = winner;
}

const bool&	ttt::getNextPlayer(void) const {
	return this->nextPlayer;
}

int	ttt::getCase(const int& i, const int& j) const {
	return this->game[i][j];
}

const bool&	ttt::getFinished(void) const {
	return this->finished;
}

const bool&	ttt::getWinner(void) const {
	return this->winner;
}

void	ttt::click(const int& i, const int& j) {
	if (this->finished)
		return;
	if(this->game[i][j] == TTT_GAME_EMPTY) {
		this->game[i][j] = this->nextPlayer;
		this->nextPlayer = !this->nextPlayer;
	}
	this->checkGame();
}