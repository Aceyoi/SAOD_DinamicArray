//Сапожников Юрий ИВТ-22

#include <vector>
#include <iostream>
#include "DinamicArray.Class.h"
#include "DinamicArray.Test.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	testcheck();

	vector<int> array = { 66,84,5,56,1,32,7,65 }; // Создание интового векторногго массива
	vector<string> arraystring = { "cab","c","b","abc","aaa","a" };// Создание стрингового векторногго массива

	size_t N = array.size();                     // Приравнивание N к размеру массива для удобного изменения int массива
	size_t S = arraystring.size();				// Приравнивание S к размеру массива для удобного изменения string массива

	DynamicArray<int> Arrayint(N, array); //конструктор с двумя параметрами int
	DynamicArray<string> Arraystr(S, arraystring); //конструктор с двумя параметрами string

	cout << "///////////////////////////////////////// INT Array ////////////////////////////////////////////////////// " << endl;
	cout << "Выводим созданный массив : " << endl;
	Arrayint.conclusion();
	cout << Arrayint.sort_check() << endl;

	cout << "Выводим первый элемент созданный массив : " << endl;
	cout << Arrayint.conclusion_up() << endl;
	cout << "Выводим последний элемент созданный массив : " << endl;
	cout << Arrayint.conclusion_back() << endl;
	cout << "Выводим элемент массива по индексу 5 : " << endl;
	cout << Arrayint.conclusion_index(5) << endl;

	cout << "Выводим массив по элементно : " << endl;
	for (int i = 0; i < S; i++) {

		cout << Arrayint.conclusion_int(i) << " " << endl;
	};

	cout << endl << "Удаляем последний элемент в массиве [65] : " << endl;
	Arrayint.del_back();
	Arrayint.conclusion();
	cout << "Удаляем первый элемент в массиве [66] : " << endl;
	Arrayint.del_up();
	Arrayint.conclusion();
	
	cout << "Удаляем элемент по индексу 3 [56] : " << endl;
	Arrayint.del_Index(3);
	Arrayint.conclusion();
	cout << "Удаляем все выбранные элементы [5] : " << endl;
	Arrayint.del(5);
	Arrayint.conclusion();

	cout << "Добавляем элемент в конец [77] : " << endl;
	Arrayint.add_back(77);
	Arrayint.conclusion();
	cout << "Добавляем элемент в начало [67] : " << endl;
	Arrayint.add_up(67);
	Arrayint.conclusion();
	cout << "Добавляем элемент по индексу 2 [123] : " << endl;
	Arrayint.add_index(123, 2);
	Arrayint.conclusion();

	cout << "Очищаем массив полностью и добавляем элемент в начало: " << endl;
	Arrayint.arrclear();
	Arrayint.add_up(1);
	Arrayint.conclusion();
	cout << "Очищаем массив полностью и добавляем элемент в конец: " << endl;
	Arrayint.arrclear();
	Arrayint.add_back(2);
	Arrayint.conclusion();

	cout << "///////////////////////////////////////// STR Array ////////////////////////////////////////////////////// " << endl;
	cout << "Выводим созданный массив : " << endl;
	Arraystr.conclusion();
	cout << Arraystr.sort_check() << endl;

	cout << "Выводим первый элемент созданный массив : " << endl;
	cout << Arraystr.conclusion_up() << endl;
	cout << "Выводим последний элемент созданный массив : " << endl;
	cout << Arraystr.conclusion_back() << endl;
	cout << "Выводим элемент массива по индексу 5 : " << endl;
	cout << Arraystr.conclusion_index(5) << endl;

	cout << endl << "Удаляем последний элемент в массиве [a] : " << endl;
	Arraystr.del_back();
	Arraystr.conclusion();
	cout << "Удаляем первый элемент в массиве [cab] : " << endl;
	Arraystr.del_up();
	Arraystr.conclusion();

	cout << "Удаляем элемент по индексу 3 [abc] : " << endl;
	Arraystr.del_Index(3);
	Arraystr.conclusion();
	cout << "Удаляем все выбранные элементы [aaa] : " << endl;
	Arraystr.del("aaa");
	Arraystr.conclusion();

	cout << "Добавляем элемент в конец [fff] : " << endl;
	Arraystr.add_back("fff");
	Arraystr.conclusion();
	cout << "Добавляем элемент в начало [hok] : " << endl;
	Arraystr.add_up("hok");
	Arraystr.conclusion();
	cout << "Добавляем элемент по индексу 2 [zxdwe] : " << endl;
	Arraystr.add_index("zxdwe", 2);
	Arraystr.conclusion();

	cout << "Очищаем массив полностью и добавляем элемент в начало: " << endl;
	Arraystr.arrclear();
	Arraystr.add_up("hok");
	Arraystr.conclusion();
	cout << "Очищаем массив полностью и добавляем элемент в конец: " << endl;
	Arraystr.arrclear();
	Arraystr.add_back("fff");
	Arraystr.conclusion();

	cout << "///////////////////////////////////////// Поиск сортировка ////////////////////////////////////////////////////// " << endl;

	DynamicArray<int> Arrayintall(N, array); // Создание нового массива для проверки сортировки и поиска
	Arrayintall.conclusion();

	DynamicArray<int> Arrayint1(Arrayintall); // Копируем массив для проверки сортировки merge
	cout << "Сортировка merge : " << endl;
	Arrayint1.sort_merge();
	Arrayint1.conclusion();

	DynamicArray<int> Arrayint2(Arrayintall); // Копируем массив для проверки сортировки quicksort
	cout << "Сортировка quicksort : " << endl;
	Arrayint2.sort_quick();
	Arrayint2.conclusion();

	DynamicArray<int> Arrayint3(Arrayintall); // Копируем массив для проверки сортировки shell
	cout << "Сортировка shell : " << endl;
	Arrayint3.sort_shell();
	Arrayint3.conclusion();

	DynamicArray<int> Arrayint4(Arrayintall); // Копируем массив для проверки сортировки bubble

	cout << "Сортировка bubble : " << endl;
	Arrayint4.sort_bubble();
	Arrayint4.conclusion();

	cout << "Бинарный поиск : " << endl;
	cout << "Число " << Arrayint4.search_bin(56) << endl;
	cout << "Индекс " << Arrayint4.search_bin_index(56) << endl;

	cout << "Интерполярный поиск : " << endl;
	cout << "Число " << Arrayint4.search_interpolation(56) << endl;
	cout << "Индекс " << Arrayint4.search_interpolation_index(56) << endl;


	return 0;
}