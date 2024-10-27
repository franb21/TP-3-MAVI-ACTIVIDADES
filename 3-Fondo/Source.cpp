#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture_fondo;
Sprite fondovj;

float escalaX;
float escalaY;

int main() {
	texture_fondo.loadFromFile("fondo.jpg");

	fondovj.setTexture(texture_fondo);

	escalaX = 800 / (float)texture_fondo.getSize().x;
	escalaY = 600 / (float)texture_fondo.getSize().y;
	fondovj.setScale(escalaX, escalaY);

	RenderWindow App(VideoMode(800, 600, 32), "Unidad 3 Fondo");
	while (App.isOpen()){

		App.clear();
		App.draw(fondovj);
		App.display();
	}
	return 0;
}
