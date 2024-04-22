#include "Classes.h"

void tema_TV();
void tema_InJungla_1();
void tema_InJungla_2();


int main()
{
    std::cout << "Tema pe acasa:" << std::endl;
    const std::string optiuni_intrare{ R"(
			1.Tema TV-uri
			2.Tema "In jungla"
	)" };

    //Afisam optiunile posibile
    std::cout << "Optiuni:" << std::endl << optiuni_intrare << std::endl;

    //Citim optiunea necesara de la tastatura
    std::cout << "Introduce numarul din dreptul optiunii necesare: ";
    short optiune{};
    std::cin >> optiune;
    std::cout << std::endl;

    //Executam functia ce corespunde optiunei introduse
    switch (optiune)
    {
    case 1: tema_TV();
        break;
    case 2:
        std::cout << "1.Programul deduce animalul in baza sunetului" << std::endl;
        std::cout << "2.Utilizatorul deduce animalul in baza sunetului" << std::endl;
        std::cout << "Optiune: ";
        short alegere;
        std::cin >> alegere;
        switch (alegere)
        {
        case 1: tema_InJungla_1();
            break;
        case 2: tema_InJungla_2();
            break;
        default: std::cout << "Optiune incorecta!" << std::endl;
        }

        break;
    default: std::cout << "Optiune incorecta!" << std::endl;
    }
}


