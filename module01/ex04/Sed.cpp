//
// Created by petr on 24.06.2021.
//

#include "Sed.h"

void Sed::replace(std::string s1, std::string s2) {
	std::string tmpBuffer(buffer);
	size_t index;

	if (s1.empty() || s2.empty()) {
		throw std::runtime_error("Filename cant be empty");
	}

	while((index = tmpBuffer.find(s1)) != std::string::npos) {
		tmpBuffer.erase(index, s1.length());
		tmpBuffer.insert(index, s2);
	}

	output << tmpBuffer;
}

Sed::Sed(std::string fileName, std::string outputFileName) {
	input = std::ifstream(fileName);
	if (!input){
		throw std::runtime_error("Cannot read input file!");
	}

	output = std::ofstream(outputFileName);
	if (!output) {
		throw std::runtime_error("Cannot create output file!");
	}

	while(input) {
		std::string tmp;
		getline(input, tmp);
		buffer += tmp;
		if (!input.eof()) {
			buffer += "\n";
		}
	}

	input.close();
}
