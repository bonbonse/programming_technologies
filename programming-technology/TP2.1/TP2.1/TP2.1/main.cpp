﻿#include <iostream>
#include "Poet.h"
#include "Keeper.h"

/*Класс Печатное издание хранит книги поэтов, романистов и фантастов. Для
поэтов определено: ФИО, годы жизни, несколько основных произведений. Для
романистов определено: ФИО, годы жизни, несколько произведений, краткая
биография. Для фантастов определено: ФИО, несколько произведений, сняты
ли фильмы по книгам.
*/
/*Разработать класс Keeper, который реализует контейнер для хранения и обработки
объектов. Класс Keeper должен обеспечивать следующие функции:
▪ добавление и удаление производных объектов абстрактного класса Writter
▪ полное сохранение себя в файле;
▪ полное восстановление себя из файла.
*/

/*TODO: 
1)Keeper 
2)Меню

*/

int main()
{
    Keeper k;
    cout << "Keeper is here!" << endl;

    k.add_poet("Semyon", nullptr, "little prince");
    k.add_poet("Kirill", nullptr, "little prince");
    cout << k.get_poet(0).get_fullname() << endl;
    cout << k.get_poet(1).get_fullname() << endl;
    cout << k.get_of_number_poet() << endl;
    
}