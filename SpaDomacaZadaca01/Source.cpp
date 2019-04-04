#include <SFML/Graphics.hpp>
#include"Cvijet.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Hello, SFML world!");
	window.setFramerateLimit(40);
	Cvijet cvijet(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(86, 210, 255));
		cvijet.draw();
		window.display();
	}

	return 0;
}