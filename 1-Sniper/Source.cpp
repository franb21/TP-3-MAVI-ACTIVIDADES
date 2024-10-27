#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture_rojo;
Sprite puntorojo;

int main() {
	texture_rojo.loadFromFile("rcircle.png");

	puntorojo.setTexture(texture_rojo);

	RenderWindow App(VideoMode(800, 600, 32), "Unidad 3 Sniper");
	while (App.isOpen()){
		App.clear();
		puntorojo.setPosition(0, 0);
		App.draw(puntorojo);
		puntorojo.setPosition(800 - 128, 0);
		App.draw(puntorojo);
		puntorojo.setPosition(0, 600 - 128);
		App.draw(puntorojo);
		puntorojo.setPosition(800 - 128, 600 - 128);
		App.draw(puntorojo);
		App.display();
	}
	return 0;
}
