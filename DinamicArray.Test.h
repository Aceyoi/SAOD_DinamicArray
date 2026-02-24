//Сапожников Юрий ИВТ-22
#pragma once

#include <cassert>
#include "DinamicArray.Modul.h"
#include "DinamicArray.Class.h"

using namespace std;

void testcheck() {
        vector<int> v_int = { 66, 84, 5, 56, 1, 32, 7, 65 };
        vector<std::string> v_str = { "cab","c","b","abc","aaa","a" };

        DynamicArray<int> arrInt(v_int.size(), v_int);
        DynamicArray<std::string> arrStr(v_str.size(), v_str);

        assert(arrInt.conclusion_up() == 66);   // первый элемент
        assert(arrInt.conclusion_back() == 65); // последний элемент

        assert(arrInt.conclusion_index(3) == 5); // элемент с индексом 2

        arrInt.add_back(99);
        assert(arrInt.conclusion_back() == 99);  // после добавления в конец

        arrInt.add_up(11);
        assert(arrInt.conclusion_up() == 11);    // после добавления в начало

        arrInt.add_index(777, 3);
        assert(arrInt.conclusion_index(3) == 777); // добавление по индексу

        arrInt.del_back();
        assert(arrInt.conclusion_back() != 99);   // последний элемент уже не 99

        arrInt.del_up();
        assert(arrInt.conclusion_up() != 11);     // первый элемент уже не 11

        arrInt.del_Index(3);
        assert(arrInt.conclusion_index(3) != 777); // добавление по индексу

        arrInt.arrclear();
        arrInt.add_up(1);
        assert(arrInt.conclusion_up() == 1);
        arrInt.arrclear();
        arrInt.add_back(2);
        assert(arrInt.conclusion_back() == 2);

        assert(arrStr.conclusion_up() == "cab");
        assert(arrStr.conclusion_back() == "a");

        assert(arrStr.conclusion_index(4) == "abc");

        arrStr.add_back("xyz");
        assert(arrStr.conclusion_back() == "xyz");

        arrStr.add_up("first");
        assert(arrStr.conclusion_up() == "first");

        arrStr.add_index("mid", 2);
        assert(arrStr.conclusion_index(2) == "mid");

        arrStr.del_back();
        arrStr.del_up();
        arrStr.del_Index(2);
        arrStr.del("aaa");


        cout << "Все assert тесты прошли успешно!" << std::endl;
    }