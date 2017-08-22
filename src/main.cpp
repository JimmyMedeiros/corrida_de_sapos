#include <iostream>
#include <array>
#include <utility>
#include "../include/Sapo.h"

int main()
{
	size_t n_sapos = 3;
	
	//Sapo* sapos = new Sapo[n_sapos];
	std::array<Sapo, 3> sapos;
	for (size_t i = 0; i < n_sapos; ++i){
		while (sapos[i].getDistPercorrida() < Sapo::getDistTotal()){
			sapos[i].jump();
		}
	}
	size_t c[] = {0, 1, 2};
	for (size_t i = 0; i < n_sapos; ++i){
		for (size_t j = i+1; j < n_sapos; ++j){
			if (sapos[c[i]].getPulos() > sapos[c[j]].getPulos()){
				size_t aux = c[i];
				c[i] = c[j];
				c[j] = aux;
			}
			else if (sapos[c[i]].getPulos() == sapos[c[j]].getPulos()){
				if (sapos[c[i]].getDistPercorrida() < sapos[c[j]].getDistPercorrida()){
					size_t aux = c[i];
					c[i] = c[j];
					c[j] = aux;
				}
			}
		}
	}

	for (size_t i = 0; i < n_sapos; ++i) {
		std::cout << "Total de pulos do sapo " << sapos[c[i]].getId() << ": " << sapos[c[i]].getPulos() << "\n";
		std::cout << "Distância percorrida pelo sapo " << sapos[c[i]].getId() << ": " << sapos[c[i]].getDistPercorrida() << "\n";
	}

	
	return 0;
}