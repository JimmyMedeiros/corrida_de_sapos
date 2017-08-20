#include <iostream>
#include "Sapo.h"

int main(int argc, char const *argv[])
{
	Sapo sapos[3];
	std::random_device rand;
	std::default_random_engine gen;
	std::uniform_int_distribution<int> main_dis(0,2);

	while(true){
		int index = main_dis(gen);
		sapos[index].jump();
		std::cout << "Sapo nº " << index + 1 << " saltou para " << sapos[index].getDistPercorrida() << "\n";
		if (sapos[index].getDist() > Sapo::getDistTotal()){
			std::cout << "Total de pulos: " << sapos[index].getPulos() << "\n";
			std::cout << "Distância percorrida: " << sapos[index].getDistPercorrida() << "\n";
			break;
		}
	}
	
	return 0;
}