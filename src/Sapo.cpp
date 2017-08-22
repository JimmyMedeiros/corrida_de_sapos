#include <random>
#include <ctime>
#include "../include/Sapo.h"

int Sapo::dist_total = 200;
int Sapo::getDistTotal(){
	return Sapo::dist_total;
}
int Sapo::geradorId = 0;

Sapo::Sapo():rd(), gen(rd()), dis(1, 10){
	Sapo::dist_percorrida = 0;
	Sapo::pulos = 0;
	Sapo::setId(++Sapo::geradorId);
}

Sapo::~Sapo(){
	;
}
int Sapo::getId(){
	return Sapo::id;
}
void Sapo::setId(int id){
	Sapo::id = id;
}
int Sapo::getDist(){
	return Sapo::dist_percorrida;
}
int Sapo::getPulos(){
	return Sapo::pulos;
}
int Sapo::getDistPercorrida(){
	return Sapo::dist_percorrida;
}
void Sapo::jump(){
	Sapo::dist_percorrida += std::round(dis(gen));
	Sapo::pulos++;
}