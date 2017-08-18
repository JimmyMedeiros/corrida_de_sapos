#ifndef _SAPO_H
#define _SAPO_H

class Sapo
{
private:
	int id;
	int dist;
	int pulos;

public:
	Sapo();
	~Sapo();
	static total_dist;
	int getId();
	void jump();
};

#endif