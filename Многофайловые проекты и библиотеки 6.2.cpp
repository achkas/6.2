// Многофайловые проекты и библиотеки 6.2

#include <iostream>
#include <string>
#include <windows.h>;
#include "Counter.h"


int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter Cont;

    std::string y = "да";
    std::string inp = " ";

    int in_val;

    char close = 'х';
    char enter_command = ' ';

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: " << std::endl;

    std::cin >> inp;

    if (inp == y) {

        std::cout << "Введите начальное значение счётчика: " << std::endl;

        std::cin >> in_val;

        Cont.setquantity(in_val);        

    }


    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): " << std::endl;

        std::cin >> enter_command;

        command m = static_cast<command>(enter_command);

        switch (m) {

        case command::plus:
            Cont.plus();
            break;

        case command::minus:
            Cont.minus();
            break;

        case command::equals:
            Cont.print_quantity();
            break;
        }
    } while (enter_command != close);

    std::cout << "До свидания! " << std::endl;

    return 0;    
}
