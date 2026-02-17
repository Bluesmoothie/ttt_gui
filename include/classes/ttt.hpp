#pragma once

#define TTT_GAME_EMPTY	2

class ttt
{

private:
	char	game[3][3];	//2 empty, 0 Player1, 1 Player2
	bool	nextPlayer;	//false Player1, true Player2
	bool	finished;
	bool	winner;		//false Player1, true Player2

	void	checkGame(void);
	void	gameFinished(const int& winner);

public:
	ttt(void);
	~ttt(void);

	const bool&		getNextPlayer(void) const;
	int				getCase(const int& i, const int& j) const;
	const bool&		getFinished(void) const;
	const bool&		getWinner(void) const;
	
	void			click(const int& i, const int& j);

};

