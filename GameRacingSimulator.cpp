#include <iostream>
#include <set>

#include "Camel.h"
#include "FastCamel.h"
#include "Centaur.h"
#include "Boots.h"
#include "MagicCarpet.h"
#include "Eagle.h"
#include "Broom.h"

#include "GroundRace.h"
#include "AirRace.h"
#include "MixedRace.h"

Transport::Transport* createTransport(int id) 
{
    switch (id) {
    case 1: return new Camel::Camel();
    case 2: return new FastCamel::FastCamel();
    case 3: return new Centaur::Centaur();
    case 4: return new Boots::Boots();
    case 5: return new MagicCarpet::MagicCarpet();
    case 6: return new Eagle::Eagle();
    case 7: return new Broom::Broom();
    }
    return 0;
}

int main() 
{
    setlocale(LC_ALL, "RU");


    while (true) {

        std::cout << "Добро пожаловать в гоночный симулятор! "<< std::endl;
        std::cout << "1. Гонка для наземного транспорта " << std::endl;
        std::cout << "2. Гонка для воздушного транспорта " << std::endl;
        std::cout << "3. Гонка для наземного и воздушного транспорта  " << std::endl;
        std::cout << "Выберите тип гонки: ";

        int type;
        std::cin >> type;
        if (type == 0) break;

        double distance;
        std::cout << "Укажите длину дистанции (должна быть положительная) ";
        std::cin >> distance;

        Race::Race* race = 0;

        if (type == 1) race = new GroundRace::GroundRace(distance);
        if (type == 2) race = new AirRace::AirRace(distance);
        if (type == 3) race = new MixedRace::MixedRace(distance);

        std::set<int> used;

        while (true) {

            std::cout << std::endl <<  "Регистрация ТС: " << std::endl;
            std::cout << "1 Верблюд "<< std::endl << "Быстрый верблюд" << std::endl << " Кентавр" << std::endl << "Ботинки";
            std::cout << "5 Ковер" << std::endl << "Орёл" << std::endl << "Метла" << std::endl << "Старт";

            int id;
            std::cin >> id;

            if (id == 0) break;

            if (used.count(id)) {
                std::cout << "Уже зарегистрирован" << std::endl;
                continue;
            }

            Transport::Transport* t = createTransport(id);

            if (!race->canRegister(t)) {
                std::cout << "Нельзя зарегистрировать" << std::endl;
                delete t;
                continue;
            }

            race->registerTransport(t);
            used.insert(id);
        }

        if (used.size() < 2) {
            std::cout << "Нужно минимум 2 участника" << std::endl;
            delete race;
            continue;
        }

        auto results = race->startRace();

        std::cout << std::endl << "Результаты: " << std::endl;
        for (auto& r : results)
            std::cout << r.first << " : " << r.second << std::endl;
        delete race;
    }

    return 0;
}