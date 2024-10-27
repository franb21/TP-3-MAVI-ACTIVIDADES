#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture_rojo;
Texture texture_azul;
Sprite puntorojo;
Sprite puntoazul;
float posX;
float posY;

int main() {
	texture_rojo.loadFromFile("rcircle.png");
	texture_azul.loadFromFile("circuloazul.png");
	puntorojo.setTexture(texture_rojo);
	puntoazul.setTexture(texture_azul);

	posX = 400 - (float)puntoazul.getTexture()->getSize().x / 2;
	posY = 300 - (float)puntoazul.getTexture()->getSize().y / 2;

	RenderWindow App(VideoMode(800, 600, 32), "Unidad 3 Transparencias");
	while (App.isOpen()) {
		App.clear();
		puntorojo.setPosition(0, 0);
		App.draw(puntorojo);
		puntorojo.setPosition(800 - 128, 0);
		App.draw(puntorojo);
		puntorojo.setPosition(0, 600 - 128);
		App.draw(puntorojo);
		puntorojo.setPosition(800 - 128, 600 - 128);
		App.draw(puntorojo);
		puntoazul.setPosition(posX, posY);
		App.draw(puntoazul);
		App.display();
	}
	return 0;
}