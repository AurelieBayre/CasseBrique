#include <iostream>
#include <SFML/Graphics.hpp>

#include "Brique.h"
#include "GestionScores.h"

Brique::Brique(sf::Vector2f position, effetBrique effetObjet )
: m_resitance(1), m_effetObjet(effetObjet)
{
    std::cout << "creation de brique" << std::endl;
    m_rectangle = sf::RectangleShape(sf::Vector2f(100, 50));
    m_rectangle.setPosition(position);

}
Brique::~Brique()
{
    GestionScores::ajouterScores();
    std::cout << "une brique a ete detruit " << std::endl;


}


void Brique::collision()
{
    m_resitance--;
    //changement de la couleur


    if(m_resitance == 0)
    {
        //destructi
    }
}
void Brique::update()
{
    m_rectangle.setFillColor(sf::Color::Cyan);
}
sf::Drawable& Brique::getShape()
{
    return m_rectangle;
}


//Setter

//getter

sf::RectangleShape& Brique::getRectangle()
{
    return m_rectangle;
}
int Brique::getResistance()
{
    return m_resitance;
}
int Brique::getEffetObjet()
{
    return m_effetObjet;
}
