
#ifndef BATTLESHIPGAME_H_
#define BATTLESHIPGAME_H_
#include "jugador.h"

class BattleShipGame {
	jugador **jugadores;
	int players;
	int cont;
public:
	BattleShipGame(int players);
	void anadirJugador(jugador* );
	void start();
	~BattleShipGame();
};

#endif /* BATTLESHIPGAME_H_ */
