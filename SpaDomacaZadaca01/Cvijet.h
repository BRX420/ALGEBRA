#pragma once
#include <SFML/Graphics.hpp>
class Cvijet
{
private:
	sf::RenderWindow *window;
	sf::CircleShape sunce1{ 75.f };
	sf::CircleShape sunce2{ 60.f, 6 };
	sf::CircleShape sunce3{ 45.f, 5 };
	sf::RectangleShape pod{ sf::Vector2f(100000.f, 50.f) };
	sf::RectangleShape stabljika{sf::Vector2f(7, 250)};
	sf::CircleShape listdole1{ 5.f };
	sf::CircleShape listdole2{ 5.f };
	sf::CircleShape listsredina1{ 7.5f };
	sf::CircleShape listsredina2{ 7.5f };
	sf::CircleShape listgore1{ 8.5f };
	sf::CircleShape listgore2{ 8.5f };
	sf::CircleShape listzadnji{ 10.f };
	sf::CircleShape oblak{ 10.f };
public: 
	Cvijet(sf::RenderWindow *window);
	void draw();
};

