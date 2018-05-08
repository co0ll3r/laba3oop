#include "CompHeader.h" 

void aggregate::makePerechen(){
// для названий процов
	makePerechen1(clWorkComp, clPerech);
// для типов проца ниже	
	makePerechen2(clWorkComp, clPerech);
// для размеров видяхи
	makePerechen3(clWorkComp, clPerech);
	this -> sortAggregate();
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

void aggregate::sortAggregate(){
	clPerech.sortProcTypeFirstPerech();
	clPerech.sortCountSecondPerech();
	clPerech.sortVideoVolumeThirdPerech();
}

void aggregate::InputFromFileForAggregate(){
	clWorkComp.InputFromFile();
	makePerechen();
}

void aggregate::addFieldAggregate(){
	clWorkComp.Add_comp();
	makePerechen();
}

void aggregate::deleteFieldAggregate(){
	clWorkComp.Delete_comp();
	makePerechen();
}

void aggregate::OutputInFileForAggregate(){
	clWorkComp.OutputInFile();
	clPerech.saveFirstPerech();
	clPerech.saveSecondPerech();
	clPerech.saveThirdPerech();
}

workComputers& aggregate::mOwc(){
	return this -> clWorkComp;
}

Perechen& aggregate::mOp(){
	return this -> clPerech;
}
