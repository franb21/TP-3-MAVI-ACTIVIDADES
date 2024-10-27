#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture_plataforma;
Sprite plataforma;
float escalaX;
float escalaY;

int main() {
	texture_plataforma.loadFromFile("plataforma.jpg");

	plataforma.setTexture(texture_plataforma);

	RenderWindow App(VideoMode(800, 600, 32), "Unidad 3 Plataformas");
	while (App.isOpen()) {
		float alto = 30;
		float posX = 40;
		float posY = 570;
		float ancho = 40;

		App.clear();

		for (int i = 0; i <= 8; i++) {

			escalaX = ancho / (float)texture_plataforma.getSize().x;
			escalaY = alto / (float)texture_plataforma.getSize().y;
			plataforma.setScale(escalaX, escalaY);
			plataforma.setPosition(posX, posY);
			App.draw(plataforma);
			alto += 40;
			posX += 60;
			posY -= 40;
			if (i == 7) {
				alto = 40;
				ancho = 270;
				posY += 40;
			}
		}

		App.display();
	}
	return 0;
}
