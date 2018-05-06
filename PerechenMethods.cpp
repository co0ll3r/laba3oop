#include "CompHeader.h"

void Perechen::showFirstPerech(){
	std::cout << std::setfill('-') << std::setw(55) << '\n' <<
		"|     Название процессора     | Количество компьютеров |\n" << 
		std::setw(55) << '\n';
	std::cout << std::setfill(' ');
//	std::cout << pBrandlen << '\n';
	for (int i = 0; i < pBrandlen; i++)
		std::cout << '|' << std::setw(30) << perechenBrands[i].ProcName << '|' << std::setw(24) << perechenBrands[i].Count << '\n';
}

void Perechen::showSecondPerech(){
	std::cout << std::setfill('-') << std::setw(50) << '\n' <<
		"|     Тип процессора     | Количество компьютеров |\n" << 
		std::setw(50) << '\n';
	std::cout << std::setfill(' ');
	for (int i = 0; i < pProclen; i++)
		std::cout << '|' << std::setw(30) << perechenProcTypes[i].ProcType<< '|' << std::setw(24) << perechenProcTypes[i].Count << '\n';
}

void Perechen::showThirdPerech(){
	std::cout << std::setfill('-') << std::setw(53) << '\n' <<
		"|     Объём видеопамяти     | Количество компьютеров |\n" << 
		std::setw(53) << '\n';
	std::cout << std::setfill(' ');
	for (int i = 0; i < pBrandlen; i++)
		std::cout << '|' << std::setw(30) << perechenVideocardVolume[i].GraphicVolume << '|' << std::setw(24) << perechenVideocardVolume[i].Count << '\n';
}
// +2 more methods
/*template <class PerechenTemplate>
void swapElementsInPerechen(int index, PerechenTemplate CL){
	PerechenTemplate temp = CL; 
	CL[index] = CL[index - 1];
       	CL[index - 1] = temp;	
}*/

void Perechen::sortProcTypeFirstPerech(){
	std::cout << "Сортировака перечня по названию процессора \n";
	int n = pBrandlen;
	bool flag;
	do{
		flag = false;
		for (int i = 0; i < pBrandlen - 1; i++){
//			swapElementsInPerechen(i, *this ->perechenBrands);
			BrandPerech temp = perechenBrands[i];
			perechenBrands[i] = perechenBrands[i + 1];
			perechenBrands[i + 1] = temp;
			flag = true;
		}
		n--;
	} while (flag);	
	showFirstPerech();
}

// +2 more methods

void saveFirstPerech(){
	std::string file;
	std::cout << "Введите имя файла для сохранения\n";
	std::cin >> file;
	std::ofstream fout;
	fout.open(file);
	if (fout.fail()){
		std::cout << file << " не удалось открыть файл\n";
		return;
	}
//	fout <<   доделая после теста вывода в окно 
}

// +2 more methods
