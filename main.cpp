#include "CompHeader.h"

void GetMenu(aggregate& ExampleComputer, bool exitFlag){
	int SwitchChoose = 1;
	std::cout << "\033c"; // clear terminal
	//system("clear");
	std::cout << "1. Загрузка файла\n2. Сохранение результатов обработки в файл\n" <<
		     "3. Добавление записи\n4. Удаление записи\n" <<
		     "5. Вывод на экран\n6. Сортировка по типу процессора и тактовой частоте\n" <<
		     "7. Алфавитная сортировка по названию марки\n8. Числовая сортировка по цене\n" <<
		     "9. Показать 1 перечень имен процессора\n10. Показать 2 перечень типов процессора\n" <<
		     "11. Показать 3 перечень объемов видеокарты\n12. Загрузить первый перечень\n" <<
		     "13. Загрузить второй перечень\n14. Загрузить третий перечень\n" <<
		     "15. Сортировать перечень 1\n16. Сортировать перечень 2\n" <<
		     "17. Сортировать перечень 3\n18. Сохранить перечни\n" <<
		     "Методы агрегата\n19. Ввод из файла\n20. Вывод в файл\n" <<
		     "21. Вывести агрегат\n22. Добавить поле в агрегат\n" <<
		     "23. Удалить поле из агрегата\n24. Сортировать агрегат\n" <<
		     "25. Сделать перечень\n";	     
		     

	while (SwitchChoose == 1){
		std::cout << "Введите пункт меню: ";
		std::cin >> SwitchChoose;
		std::cout << "\n";
		switch(SwitchChoose){
			case 1: ExampleComputer.mOwc().InputFromFile(); break;
			case 2: ExampleComputer.mOwc().OutputInFile(); break;
			case 3: ExampleComputer.mOwc().Add_comp(); break;
			case 4: ExampleComputer.mOwc().Delete_comp(); break;
			case 5: ExampleComputer.mOwc().showInfo(); break;
			case 6: ExampleComputer.mOwc().SortProcTypeAndClock(); break;
			case 7: ExampleComputer.mOwc().SortProcName(); break; 	
			case 8:	ExampleComputer.mOwc().SortPrice(); break;
			case 9: ExampleComputer.mOp().showFirstPerech(); break;
			case 10: ExampleComputer.mOp().showSecondPerech(); break; 
			case 11: ExampleComputer.mOp().showThirdPerech();break; 
			case 12: makePerechen1(ExampleComputer.mOwc(),ExampleComputer.mOp()); break; 
			case 13: makePerechen2(ExampleComputer.mOwc(),ExampleComputer.mOp());break; 
			case 14: makePerechen3(ExampleComputer.mOwc(),ExampleComputer.mOp());break; 
			case 15: ExampleComputer.mOp().sortProcTypeFirstPerech(); break;
			case 16: ExampleComputer.mOp().sortCountSecondPerech();break; 
			case 17: ExampleComputer.mOp().sortVideoVolumeThirdPerech(); break; 
			case 18: {
					 std::cout << "1. Сохранить 1\n 2. Сохранить 2\n 3. Сохранить 3\n";
					 int j;
					 std::cin >> j;
					 switch(j){
						 case 1: ExampleComputer.mOp().saveFirstPerech(); break;
						 case 2: ExampleComputer.mOp().saveSecondPerech(); break;
						 case 3: ExampleComputer.mOp().saveThirdPerech(); break;
						 default: break;
					 }
					 break;
				 }
			case 19: ExampleComputer.InputFromFileForAggregate(); break; 
			case 20: ExampleComputer.OutputInFileForAggregate(); break; 
			case 21: ExampleComputer.showAggregate(); break;
			case 22: ExampleComputer.addFieldAggregate(); break; 
			case 23: ExampleComputer.deleteFieldAggregate(); break; 
			case 24: ExampleComputer.sortAggregate(); break; 
			case 25: ExampleComputer.makePerechen(); break; 
			default: exitFlag =false;
		}
		//  	std::cout << "Нажмите любую клавишу для продолжения ";
		//	system("read -s -N 1");
		std::cout << "\nВведите 1 для повторного выбора пункта меню(без очистки экрана): ";
		std::cin >> SwitchChoose; // 
	}
//	std::cin.get();

}

int main()
{
	aggregate go;
	
	bool flag = true;
	
	while(flag)
		GetMenu(go, flag);
//	go.InputFromFileForAggregate();
//	go.makePerechen();
	
//	go.addFieldAggregate();
//	go.addFieldAggregate();
//	go.sortAggregate();
//	go.deleteFieldAggregate();

//	go.OutputInFileForAggregate();

	go.showAggregate();
	std::cout << "check\n";
	

	return 0;
}
