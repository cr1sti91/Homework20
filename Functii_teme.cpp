#include "Classes.h"

void tema_TV()
{
    double height{}, width{};
    size_t nr{};

    std::cout << "Introdu nr de TV-uri: ";
    std::cin >> nr;

    std::vector<TV> vectorTV;

    for (size_t i{}; i < nr; i++)
    {
        double h, w;
        std::cout << "Introdu inaltimea si latime pentru TV [" << i + 1 << "] : ";
        std::cin >> h >> w;
        vectorTV.push_back(TV(h, w));
    }
    std::cout << std::endl;

    for (size_t i{}; i < nr; i++)
    {
        std::cout << "TV[" << i + 1 << "]: arie = " << vectorTV.at(i).arie() << std::endl;
    }
}

void tema_InJungla_1()
{
    bool final = false;
    while (!final)
    {
        system("CLS");

        std::cout << "Analizati sunetul..." << std::endl;
        std::cout << "Introdu sunetul auzit: ";
        std::string raspuns{};
        std::cin >> raspuns;

        tipAnimal animal;

        if (raspuns == "Grr")
            animal = tipAnimal::Leu;
        else if (raspuns == "Rawr")
            animal = tipAnimal::Tigru;
        else if (raspuns == "Sss")
            animal = tipAnimal::Sarpe;
        else if (raspuns == "Cirip")
            animal = tipAnimal::Pasare;
        else {
            std::cout << "Sunet necunoscut" << std::endl;
            std::cout << "Continuati? Introdu 'da' sau 'nu': ";
            std::cin >> raspuns;
            if (raspuns == "da")
                continue;
            else
                break;
        }

        std::cout << "Sunetul este produs de " << Animal::tipAnimal_to_str(animal) << std::endl;
        Animal(animal).redareSunet();

        std::cout << std::endl;
        std::cout << "Continuati? Introdu 'da' sau 'nu': ";
        std::cin >> raspuns;
        if (raspuns == "da")
            continue;
        else
            final = true;
    }
}

void tema_InJungla_2()
{
    Animal animale[]{ Animal(tipAnimal::Tigru), Animal(tipAnimal::Leu),
                      Animal(tipAnimal::Sarpe), Animal(tipAnimal::Pasare),
                      Animal(tipAnimal::Maimuta), Animal(tipAnimal::Elefant) };

    std::random_device rd;
    std::uniform_int_distribution<int> dist(0, 5);

    bool final = false;
    while (!final)
    {
        system("CLS");
        unsigned nr_animal = dist(rd);
        std::cout << "Analizati sunetul..." << std::endl;

        animale[nr_animal].redareSunet();

        std::cout << "Introdu animalul ce a redat sunetul dat: ";
        std::string raspuns{};
        std::cin >> raspuns;

        if (Animal::str_to_tipAnimal(raspuns) == animale[nr_animal].getName())
            std::cout << "Raspuns corect!" << std::endl;
        else
            std::cout << "Raspuns incorect! Sunetul a fost redat de catre "
            << Animal::tipAnimal_to_str(animale[nr_animal].getName()) << std::endl;

        std::cout << std::endl;
        std::cout << "Continuati? Introdu 'da' sau 'nu': ";
        std::cin >> raspuns;
        if (raspuns == "da")
            continue;
        else
            final = true;
    }
}


