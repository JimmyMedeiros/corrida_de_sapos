#ifndef _SAPO_H
#define _SAPO_H
#include <random>

class Sapo
{
private:
	int tam_pulo;
	std::random_device rd;
	std::default_random_engine gen;
	std::uniform_int_distribution<> dis;
	int id;
	int dist_percorrida;
	int pulos;

public:
	Sapo();
	~Sapo();
	static int dist_total;
	static int getDistTotal();
	int getId();
	void setId(int id);
	int getDist();
	int getPulos();
	int getDistPercorrida();
	void jump();
};

#endif