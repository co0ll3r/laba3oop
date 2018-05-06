#include "CompHeader.h" 
#include <set>

void aggregate::makePerechen(){
	// для названий процов
	std::set<std::string> UniqueNames;
	for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
		UniqueNames.insert(clWorkComp.getMassive()[i].CompInfo.ProcName);
	int nomerMass = 0, counter = 1;
	clPerech.setpBrandlen(UniqueNames.size());
	for (auto a : UniqueNames)
	{
		std::cout << "\nCH " << a << '\n';
		clPerech.setperechProcName(a, nomerMass);
		for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
			if (a == clWorkComp.getMassive()[i].CompInfo.ProcName)
				clPerech.setC1(counter++, nomerMass);
		counter = 1;
		nomerMass++;
	}
// для типов проца ниже	
	UniqueNames.clear();
	int k = 0;
	counter = 1;
	for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
		UniqueNames.insert(clWorkComp.getMassive()[i].CompInfo.ProcType);
	clPerech.setpProclen(UniqueNames.size());
	for (auto a : UniqueNames)
	{
		std::cout << "\nCH2 " << a << '\n';
		clPerech.setperechProcTypes(a, k);
		for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
			if (a == clWorkComp.getMassive()[i].CompInfo.ProcType)
				clPerech.setC2(counter++, i);
		counter = 1;
	}
// для размеров видяхи
	std::set<double> VolumePer;
	k = 0; counter = 1;
	for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
		VolumePer.insert(clWorkComp.getMassive()[i].CompInfo.GraphicVolume);
	clPerech.setpVideolen(VolumePer.size());
	for (auto a : VolumePer){
		std::cout << "\nCH3 " << a << '\n';
		clPerech.setperechVideoVol(a, k);	
		for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
			if (a == clWorkComp.getMassive()[i].CompInfo.GraphicVolume)
				clPerech.setC3(counter++, i);
		counter = 1;
	}
} 

void aggregate::showAggregate(){
	std::cout << "Полный список:\n";
	clWorkComp.showInfo();
	std::cout << "Перечни:\n";
	clPerech.showFirstPerech();
	clPerech.showSecondPerech();
	clPerech.showThirdPerech();
	std::cout << '\n';
}

void aggregate::InputFromFileForAggregate(){
	clWorkComp.InputFromFile();
	makePerechen();
}
