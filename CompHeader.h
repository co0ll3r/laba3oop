#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <set>
#pragma once

const int N = 100;
class Perechen;
class workComputers;

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
	TypeProcPerech& operator=(TypeProcPerech& c){
		if (&c != this)
		{
			ProcType = c.ProcType;
			Count = c.Count;
		}
		return *this;
	}
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

		friend void makePerechen1(workComputers clWorkComp, Perechen& clPerech);

		std::vector<RECORD>& getMassive();
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

		friend void makePerechen1(workComputers clWorkComp, Perechen& clPerech);

		void setpBrandlen(int i) {pBrandlen = i;}
		void setpProclen(int i) {pProclen = i;}
		void setpVideolen(int i) {pVideolen = i;}
		void setperechProcName(std::string s, int i) {perechenBrands[i].ProcName = s;}
		void setperechProcTypes(std::string s, int i) {perechenProcTypes[i].ProcType = s;}
		void setperechVideoVol(double s, int i) {perechenVideocardVolume[i].GraphicVolume = s;}
		void setC1(int k, int i) {
			perechenBrands[i].Count = k;}
		void setC2(int k, int i) {
			perechenProcTypes[i].Count = k;}
		void setC3(int k, int i) {
			perechenVideocardVolume[i].Count = k;}

		BrandPerech* getBrands() { return this ->perechenBrands;}

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
		
		void InputFromFileForAggregate(); //+ Считатать из файла методом класса, составить перечень(makePerech)
		void OutputInFileForAggregate(); // используй два метода от класса и перечня 
		void showAggregate(); //+
		void addFieldAggregate();//mb+
		void deleteFieldAggregate();//mb+
		void sortAggregate(); //+
		void makePerechen(); //+
	private:
		workComputers clWorkComp;
		Perechen clPerech ;
};
