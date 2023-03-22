#include "headers.h"

int bintodec(std::vector<bool> bin) {
	int dec = 0;
	int pow2 = 1;
	for (int i = bin.size() - 1; i >= 0; i--) {
		//std::cout << "\nPower: " << std::to_string(pow2);
		//std::cout << "\nBit Value: " << std::to_string(bin[i]);;

		if (bin[i]) {
			dec += pow2;
			//std::cout << "\ndecimal: " << std::to_string(dec);
		}
		pow2 *= 2;

	}
	return dec;

}

std::string part_1(const Input input) {
	std::vector<bool> grate;
	std::vector<bool> erate;
	int decgrate = 0;
	int decerate = 0;



	for (int i = 0; i < input[0].size(); i++) {
		int Ts = 0;
		for (int n = 0; n < input.size(); n++) {
			if (input[n][i]) {
				Ts++;
			}
		}
		grate.push_back(Ts >= input.size() / 2);
		erate.push_back(Ts < input.size() / 2); 
	}
	//std::cout << "\nGAMMA RATE: " << std::to_string(bintodec(grate)) << "\n";
	//std::cout << "\nEPSILON RATE: " << std::to_string(bintodec(erate)) << "\n";

	return std::to_string(bintodec(grate) * bintodec(erate));
}