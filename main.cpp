#include "CompHeader.h"

void GetMenu(workComputers& ExampleComputer){
	int SwitchChoose = 1;
	std::cout << "\033c"; // clear terminal
	//system("clear");
	std::cout << "1. Загрузка файла\n2. Сохранение результатов обработки в файл\n" <<
		     "3. Добавление записи\n4. Удаление записи\n" <<
		     "5. Вывод на экран\n6. Сортировка по типу процессора и тактовой частоте\n" <<
		     "7. Алфавитная сортировка по названию марки\n8. Числовая сортировка по цене\n"; 
	while (SwitchChoose == 1){
		std::cout << "Введите пункт меню: ";
		std::cin >> SwitchChoose;
		std::cout << "\n";
		switch(SwitchChoose){
			case 1: ExampleComputer.InputFromFile(); break;
			case 2: ExampleComputer.OutputInFile(); break;
			case 3: ExampleComputer.Add_comp(); break;
			case 4: ExampleComputer.Delete_comp(); break;
			case 5: ExampleComputer.showInfo(); break;
			case 6: ExampleComputer.SortProcTypeAndClock(); break;
			case 7: ExampleComputer.SortProcName(); break; 	
			case 8:	ExampleComputer.SortPrice(); break;
			default: exit(1);
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
	workComputers example;
	aggregate go;
	go.InputFromFileForAggregate();
	go.showAggregate();
	std::cout << "check\n";
	

	return 0;
}
