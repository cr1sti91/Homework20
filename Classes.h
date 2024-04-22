#pragma once
#include <iostream>
#include <vector>
#include <cassert>
#include <random>
#include <SFML/Audio.hpp>

const std::string sunetTigru = "Sounds/CQBSDLH-tiger-growling.mp3";
const std::string sunetLeu = "Sounds/mixkit-wounded-lion-growling-5.wav";
const std::string sunetSarpe = "Sounds/5LYFUA2-amphibians-snakes-snake-rattle-big-shake.mp3";
const std::string sunetPasare = "Sounds/mixkit-forest-bird-singing-1211.wav";
const std::string sunetMaimuta = "Sounds/monkey-128368.mp3";
const std::string sunetElefant = "Sounds/-154831.mp3";


//Tema TV-uri
class TV
{
private:
    double height{};
    double width{};

public:
    TV() = default;
    TV(double p_height, double p_width);

    double arie();
};



//Tema "In jungla"
enum class tipAnimal {
    Tigru = 1, Leu, Sarpe, Pasare,
    Maimuta, Elefant
};



class Animal
{
private:
    tipAnimal nume;
    sf::SoundBuffer buffer;
    sf::Sound sound;

public:
    Animal(tipAnimal animal);

    void redareSunet();
    const tipAnimal getName() const;

    static const std::string Path(tipAnimal animal);
    static const tipAnimal str_to_tipAnimal(std::string animal);
    static const std::string tipAnimal_to_str(const tipAnimal animal);
};