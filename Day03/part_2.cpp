#include "headers.h"

typedef std::vector<std::vector<bool>> vvb;

int bintodec1(std::vector<bool> bin) { // Binary to Decimal conversion
	int dec = 0; // Decimal Value
	int pow2 = 1; // Power of 2


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

int GetRatingIndex(Input input, bool KeepMost) {
	std::vector<int> indices;
	for (int i = 0; i < input.size(); i++) {
		indices.push_back(i);
	}

	for (int p = 0; p < input[0].size(); p++) {
		int Ts = 0;
		for (int i : indices) {
			if (input[i][p]) {
				Ts++;
			}
		}

		float halfpoint = (float)indices.size() / 2; // cut off point for the majority value
		bool KeepTs = (Ts >= halfpoint) == KeepMost;
		std::vector<int> IndicesRemaining;
		for (int i : indices) { // for each row
			if (KeepTs == input[i][p]) {
				IndicesRemaining.push_back(i);
			}
		}
		indices = IndicesRemaining;
		if (indices.size() == 1) {
			return indices[0];
		}
	}
	return -1;
}

std::string part_2(const Input input) {
	int GenIndex = GetRatingIndex(input, true);
	std::vector<bool> GenRating_bin = input[GenIndex];
	int GenRating = bintodec1(GenRating_bin);

	int ScrubIndex = GetRatingIndex(input, false);
	std::vector<bool> ScrubRating_Bin = input[ScrubIndex];
	int ScrubRating = bintodec1(ScrubRating_Bin);

	return std::to_string(ScrubRating * GenRating);
}