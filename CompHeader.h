#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#pragma once

const int N = 100;

struct COMP{
	std::string ProcName; // Brand name
	std::string ProcType; // Specification
	std::string Graphics; // Graphic Card
	double GraphicVolume;
	double ClockSpeed;
	double RAM;
	double Storage;
};

struct RECORD{
	COMP CompInfo;
	double CompCost;
	int CompInStock;
};

struct BrandPerech{
	std::string ProcName;
	int Count;
};

struct TypeProcPerech{
	std::string ProcType;
	int count;
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

class Perechen{
	public:
		Perechen() : pBlen(0), pPTlen(0), pVVlen(0) {}
		~Perechen() {}
		Perechen(Perechen&);
		Perechen operator=(Perechen&);
		
		void showFirstPerech();
		void showSecondPerech();
		void showThirdPerech();
		void sortFirstPerech();
		void sortSecondPerech();
		void sortThirdPerech();
		void saveFirstPerech();
		void saveSecondPerech();
		void saveThirdPerech();
	private:
		int pBlen, pPTlen, pVVlen;
		RECORD perechenBrands [N];
		RECORD perechenProcTypes [N];
		RECORD perechenVideocardVolume [N];

};

class aggregate{
	public:

	private:
		workComputers clWorkComp [N];
		Perechen clPerech [N];
};
