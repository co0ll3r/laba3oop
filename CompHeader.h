#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#pragma once

struct COMP{
	std::string ProcName; // Brand name
	std::string ProcType; // Specification
	std::string Graphics; // Graphic Card
	double ClockSpeed;
	double RAM;
	double Storage;
};

struct RECORD{
	COMP CompInfo;
	double CompCost;
	int CompInStock;
};

class workComputers {
	public:
		void InputFromFile();
		void OutputInFile();
		void Add_comp();
		void Delete_comp();
		void showInfo();
		void swapElementsInVector(unsigned);
		void SortProcTypeAndClock();
		void SortProcName();
		void SortPrice();
	private:
		std::vector<RECORD> CapabilitiesComp;
};

