#include "CompHeader.h"

void Perechen::showFirstPerech(){
	std::cout << std::setfill('-') << std::setw(57) << '\n' <<
		"|     Название процессора     | Количество компьютеров |\n" << 
		std::setw(57) << '\n';
	std::cout << std::setfill(' ');
//	std::cout << pBrandlen << '\n';
	for (int i = 0; i < pBrandlen; i++)
		std::cout << '|' << std::setw(29) << perechenBrands[i].ProcName << '|' << std::setw(24) << perechenBrands[i].Count << "|\n";
	std::cout << '\n';
}

void Perechen::showSecondPerech(){
	std::cout << std::setfill('-') << std::setw(52) << '\n' <<
		"|     Тип процессора     | Количество компьютеров |\n" << 
		std::setw(52) << '\n';
	std::cout << std::setfill(' ');
	for (int i = 0; i < pProclen; i++)
		std::cout << '|' << std::setw(24) << perechenProcTypes[i].ProcType<< '|' << std::setw(24) << perechenProcTypes[i].Count << "|\n";
	std::cout << '\n';
}

void Perechen::showThirdPerech(){
	std::cout << std::setfill('-') << std::setw(55) << '\n' <<
		"|     Объём видеопамяти     | Количество компьютеров |\n" << 
		std::setw(55) << '\n';
	std::cout << std::setfill(' ');
	for (int i = 0; i < pVideolen; i++)
		std::cout << '|' << std::setw(27) << perechenVideocardVolume[i].GraphicVolume << '|' << std::setw(24) << perechenVideocardVolume[i].Count << "|\n";
	std::cout << '\n';
}
/*template <class PerechenTemplate>
void swapElementsInPerechen(int index, PerechenTemplate CL){
	PerechenTemplate temp = CL; 
	CL[index] = CL[index - 1];
       	CL[index - 1] = temp;	
}*/

void Perechen::sortProcTypeFirstPerech(){
//	std::cout << "Сортировака перечня по названию процессора \n";
	int n = pBrandlen;
	bool flag;
	do{
		flag = false;
		for (int i = 1; i < n; i++){
			//			swapElementsInPerechen(i, *this ->perechenBrands);
			if (perechenBrands[i - 1].ProcName > perechenBrands[i].ProcName)
			{
				BrandPerech temp = perechenBrands[i];
				perechenBrands[i] = perechenBrands[i - 1];
				perechenBrands[i - 1] = temp;
				flag = true;
			}
		}
		n--;
	} while (flag);	
//	showFirstPerech();
}

void Perechen::sortCountSecondPerech(){
//	std::cout << "Сортировка перечня по количеству компьютеров с данным процессором\n";
	int n = pProclen;
	bool flag;
	do{
		flag = false;
		for(int i = 1; i < n; i++){
			if (perechenProcTypes[i - 1].Count > perechenProcTypes[i].Count)			
			{
				TypeProcPerech temp = perechenProcTypes[i];
				perechenProcTypes[i] = perechenProcTypes[i - 1];
				perechenProcTypes[i - 1] = temp;
				flag = true;
			}
		}
		n--;
	} while (flag);
//	showSecondPerech();
}

void Perechen::sortVideoVolumeThirdPerech(){
//	std::cout << "Сортировака перечня по объему видеопамяти\n";
	int n = pVideolen;
	bool flag;
	do{
		flag = false;
		for (int i = 1; i < n; i++){
			if (perechenVideocardVolume[i - 1].GraphicVolume > perechenVideocardVolume[i].GraphicVolume)
			{
				VideocardsPerech temp = perechenVideocardVolume[i];

				perechenVideocardVolume[i] = perechenVideocardVolume[i - 1];
				perechenVideocardVolume[i - 1] = temp;
				flag = true;
			}
		}
		n--;
	} while (flag);	
//	showThirdPerech();
}

void Perechen::saveFirstPerech(){
	std::string file;
	std::cout << "Введите имя файла для сохранения 1 перечень\n";
	std::cin >> file;
	std::ofstream fout;
	fout.open(file);
	if (fout.fail()){
		std::cout << file << " не удалось открыть файл\n";
		return;
	}
	fout <<   std::setfill('-') << std::setw(57) << '\n' <<
		"|     Название процессора     | Количество компьютеров |\n" << 
	std::setw(57) << '\n';
	fout << std::setfill(' ');
//	std::cout << pBrandlen << '\n';
	for (int i = 0; i < pBrandlen; i++)
		fout << '|' << std::setw(29) << perechenBrands[i].ProcName << '|' << std::setw(24) << perechenBrands[i].Count << "|\n";
	fout << '\n';
}

void Perechen::saveSecondPerech(){
	std::string file;
	std::cout << "Введите имя файла для сохранения 2 перечень\n";
	std::cin >> file;
	std::ofstream fout;
	fout.open(file);
	if (fout.fail()){
		std::cout << file << " не удалось открыть файл\n";
		return;
	}
	fout << std::setfill('-') << std::setw(52) << '\n' <<
		"|     Тип процессора     | Количество компьютеров |\n" << 
		std::setw(52) << '\n';
	fout << std::setfill(' ');
	for (int i = 0; i < pProclen; i++)
		fout << '|' << std::setw(24) << perechenProcTypes[i].ProcType<< '|' << std::setw(24) << perechenProcTypes[i].Count << "|\n";
	fout << '\n';
}


void Perechen::saveThirdPerech(){
	std::string file;
	std::cout << "Введите имя файла для сохранения 3 перечень\n";
	std::cin >> file;
	std::ofstream fout;
	fout.open(file);
	if (fout.fail()){
		std::cout << file << " не удалось открыть файл\n";
		return;
	}
	fout << std::setfill('-') << std::setw(55) << '\n' <<
		"|     Объём видеопамяти     | Количество компьютеров |\n" << 
		std::setw(55) << '\n';
	fout << std::setfill(' ');
	for (int i = 0; i < pVideolen; i++)
		fout << '|' << std::setw(27) << perechenVideocardVolume[i].GraphicVolume << '|' << std::setw(24) << perechenVideocardVolume[i].Count << "|\n";
	fout << '\n';
}

void makePerechen1(workComputers clWorkComp, Perechen& clPerech){
	std::set<std::string> UniqueNames;
	for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
		UniqueNames.insert(clWorkComp.getMassive()[i].CompInfo.ProcName);
	int nomerMass = 0, counter = 1;
	clPerech.setpBrandlen(UniqueNames.size());
	for (auto a : UniqueNames)
	{
//		std::cout << "\nCH " << a << '\n';
		clPerech.setperechProcName(a, nomerMass);
		for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
			if (a == clWorkComp.getMassive()[i].CompInfo.ProcName)
				clPerech.setC1(counter++, nomerMass);
		counter = 1;
		nomerMass++;
	}	
}

void makePerechen2(workComputers clWorkComp, Perechen& clPerech){
	std::set<std::string> UniqueNames;
	int nomerMass = 0, counter = 1;
	for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
		UniqueNames.insert(clWorkComp.getMassive()[i].CompInfo.ProcType);
	clPerech.setpProclen(UniqueNames.size());
	for (auto a : UniqueNames)
	{
//		std::cout << "\nCH2 " << a << '\n';
		clPerech.setperechProcTypes(a, nomerMass);
		for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
			if (a == clWorkComp.getMassive()[i].CompInfo.ProcType)
				clPerech.setC2(counter++, nomerMass);
		counter = 1;
		nomerMass++;
	}
}

void makePerechen3(workComputers clWorkComp, Perechen& clPerech){
	std::set<double> VolumePer;
 	int nomerMass = 0, counter = 1;
	for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
		VolumePer.insert(clWorkComp.getMassive()[i].CompInfo.GraphicVolume);
	clPerech.setpVideolen(VolumePer.size());
	for (auto a : VolumePer){
//		std::cout << "\nCH3 " << a << '\n';
		clPerech.setperechVideoVol(a, nomerMass);	
		for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
			if (a == clWorkComp.getMassive()[i].CompInfo.GraphicVolume)
				clPerech.setC3(counter++, nomerMass);
		counter = 1;
		nomerMass++;
	}
}
