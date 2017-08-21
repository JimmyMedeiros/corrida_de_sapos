#include <iostream>
#include "../include/Sapo.h"

int main(int argc, char const *argv[])
{
	Sapo sapos[3];
	int i;
	/*std::random_device rand;
	std::default_random_engine gen;
	std::uniform_int_distribution<int> main_dis(0,2);*/

	bool ganhadores[3];
	for (i = 0; i < 3; ++i){
		ganhadores[i] = false;
	}

	while(ganhadores[0] == false and ganhadores[1] == false and ganhadores[2] == false){
		//int index = main_dis(gen);
		for (i = 0; i < 3; ++i){
			sapos[i].jump();
			std::cout << "Sapo nº " << i + 1 << " saltou para " << sapos[i].getDistPercorrida() << "\n";
			if (sapos[i].getDistPercorrida() > Sapo::getDistTotal()){
				ganhadores[i]++;
				break;
			}
		}
	}
	std::cout << "Total de pulos do sapo " << i + 1 << ": " << sapos[i].getPulos() << "\n";
			std::cout << "Distância percorrida: " << sapos[i].getDistPercorrida() << "\n";
	/*for (int i = 0; i < count; ++i){
		if (ganhadores[i] == true){
			std::cout << "Total de pulos: " << sapos[index].getPulos() << "\n";
			std::cout << "Distância percorrida: " << sapos[index].getDistPercorrida() << "\n";
		}
	}*/
	
	return 0;
}