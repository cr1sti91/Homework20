#include "Classes.h"


TV::TV(double p_height, double p_width) : height(p_height), width(p_width) {}

double TV::arie() {
    return height * width;
}



Animal::Animal(tipAnimal animal) : nume(animal)
{
    assert(this->buffer.loadFromFile(Path(animal)));

    this->sound.setBuffer(this->buffer);
}

void Animal::redareSunet()
{
    this->sound.play(); 
    //Asteptam cat timp se reda sunetul
    while (sound.getStatus() == sf::Sound::Playing) {}
}

const tipAnimal Animal::getName() const
{
    return this->nume;
}


const std::string Animal::Path(tipAnimal animal)
{
    switch (animal)
    {
    case tipAnimal::Tigru: return sunetTigru;
        break;
    case tipAnimal::Leu: return sunetLeu;
        break;
    case tipAnimal::Sarpe: return sunetSarpe;
        break;
    case tipAnimal::Pasare: return sunetPasare;
        break;
    case tipAnimal::Maimuta: return sunetMaimuta;
        break;
    case tipAnimal::Elefant: return sunetElefant;
        break;
    }
}

const tipAnimal Animal::str_to_tipAnimal(std::string animal)
{
   if (animal == "leu")
       return tipAnimal::Leu;
   else if (animal == "tigru")
       return tipAnimal::Tigru;
   else if (animal == "sarpe")
       return tipAnimal::Sarpe;
   else if (animal == "pasare")
       return tipAnimal::Pasare;
   else if (animal == "maimuta")
       return tipAnimal::Maimuta;
   else if (animal == "elefant")
       return tipAnimal::Elefant;
   else 
       std::cout << "In jungla data nu exista asa animal" << std::endl;
}

const std::string Animal::tipAnimal_to_str(const tipAnimal animal)
{
    switch (animal)
    {
    case tipAnimal::Tigru: return "Tigru";
        break;
    case tipAnimal::Leu: return "Leu";
        break;
    case tipAnimal::Sarpe: return "Sarpe";
        break;
    case tipAnimal::Pasare: return "Pasare";
        break;
    case tipAnimal::Maimuta: return "Maimuta";
        break;
    case tipAnimal::Elefant: return "Elefant";
        break;
    }
}


