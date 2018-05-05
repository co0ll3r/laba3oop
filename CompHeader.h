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
	int Count;
};

struct VideocardsPerech{
 	double GraphicVolume;
	int Count;
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
		Perechen() : pBrandlen(0), pProclen(0), pVideolen(0) {}
		~Perechen() {}
		Perechen(Perechen&);
		Perechen operator=(Perechen&);
		
		void showFirstPerech();
		void showSecondPerech();
		void showThirdPerech();
		void sortProcTypeFirstPerech();
		void sortCountSecondPerech();
		void sortVideoVolumeThirdPerech();
		void saveFirstPerech();
		void saveSecondPerech();
		void saveThirdPerech();
	private:
		int pBrandlen, pProclen, pVideolen;
		BrandPerech perechenBrands [N];
		TypeProcPerech perechenProcTypes [N];
		VideocardsPerech perechenVideocardVolume [N];
};

class aggregate{
	public:
		aggregate() {}	
		~aggregate() {}
		aggregate(const aggregate&);
		aggregate& operator=(const aggregate&);
		
		void InputFromFileForAggregate(); // Считатать из файла методом класса, составить перечень(makePerech)
		void OutputInFileForAggregate(); // используй два метода от класса и перечня 
		void showAggregate();
		void addFieldAggregate();
		void deleteFieldAggregate();
		void sortAggregate();
		void makePerechen();
	private:
		workComputers clWorkComp;
		Perechen clPerech ;
};
