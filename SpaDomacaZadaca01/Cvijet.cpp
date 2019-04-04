#include "Cvijet.h"
#include <SFML/Graphics.hpp>

Cvijet::Cvijet(sf::RenderWindow * window)
{
	this->window = window;
	
}

void Cvijet::draw()
{
	sunce1.setPosition(25.f, 25.f);
	sunce1.setFillColor(sf::Color(241, 244, 41));
	window->draw(sunce1);
	sunce2.setOrigin(60.f, 60.f);
	sunce2.setPosition(100.f, 100.f);
	sunce2.setFillColor(sf::Color(224, 155, 65));
	sunce2.rotate(10.f);
	window->draw(sunce2);
	sunce3.setOrigin(45.f, 45.f);
	sunce3.setPosition(100.f, 100.f);
	sunce3.setFillColor(sf::Color(204, 36, 14));
	sunce3.rotate(-10.f);
	window->draw(sunce3);
	pod.setPosition(0.f,550.f);
	pod.setFillColor(sf::Color(132, 100, 35));
	window->draw(pod);
	stabljika.setPosition(600.f, 300.f);
	stabljika.setFillColor(sf::Color(37, 219, 52));
	window->draw(stabljika);
	listdole1.setScale(10.f, 1.6f);
	listdole1.setFillColor(sf::Color(37, 219, 52));
	listdole1.setPosition(609.f, 290.f);
	listdole1.setRotation(45.f);
	window->draw(listdole1);
	listdole2.setScale(10.f, 1.6f);
	listdole2.setFillColor(sf::Color(37, 219, 52));
	listdole2.setPosition(609.f, 302.f);
	listdole2.setRotation(135.f);
	window->draw(listdole2);
	listsredina1.setScale(8.f, 1.f);
	listsredina1.setFillColor(sf::Color(37, 219, 52));
	listsredina1.setPosition(600.f, 290.f);
	window->draw(listsredina1);
	listsredina2.setScale(8.f, 1.f);
	listsredina2.setFillColor(sf::Color(37, 219, 52));
	listsredina2.setPosition(490.f, 290.f);
	window->draw(listsredina2);
	listgore1.setScale(11.f, 1.f);
	listgore1.setFillColor(sf::Color(37, 219, 52));
	listgore1.setRotation(55.f);
	listgore1.setPosition(506.f, 145.f);
	window->draw(listgore1);
	listgore2.setScale(11.f, 1.f);
	listgore2.setFillColor(sf::Color(37, 219, 52));
	listgore2.setRotation(-55.f);
	listgore2.setPosition(592.f, 300.f);
	window->draw(listgore2);
	listzadnji.setScale(12.f, 0.8f);
	listzadnji.setFillColor(sf::Color(37, 219, 52));
	listzadnji.setRotation(90.f);
	listzadnji.setPosition(611.f, 60.f);
	window->draw(listzadnji);
	oblak.setPosition(200.f, 20.f);
	oblak.setFillColor(sf::Color(255, 255, 255));
	oblak.setScale(15.f, 4.f);
	window->draw(oblak);

}