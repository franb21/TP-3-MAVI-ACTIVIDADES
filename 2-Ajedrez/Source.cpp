#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture_blanco;
Texture texture_negro;
Sprite blanco;
Sprite negro;
float escalaX;
float escalaY;

int main() {
	texture_blanco.loadFromFile("chessw.png");
	texture_negro.loadFromFile("chessb.png");

	blanco.setTexture(texture_blanco);
	negro.setTexture(texture_negro);

	escalaX = 100 / (float)texture_blanco.getSize().x;
	escalaY = 100 / (float)texture_blanco.getSize().y;

	blanco.setScale(escalaX, escalaY);
	negro.setScale(escalaX, escalaY);

	RenderWindow App(VideoMode(800, 800, 32), "Unidad 3 Ajedrez");
	while (App.isOpen()){
		float posInicialblanco = 0;
		float posInicialnegro = 100;
		float posY = 0;
		App.clear();
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 4; j++) {
				float posXblanco = posInicialblanco;
				float posXnegro = posInicialnegro;
				for (int h = 0; h < 8; h++) {
					blanco.setPosition(posXblanco, posY);
					negro.setPosition(posXnegro, posY);
					App.draw(blanco);
					App.draw(negro);
					posXblanco += 200;
					posXnegro += 200;
				}
				posY += 200;
			}
			posInicialblanco = 100;
			posInicialnegro = 0;
			posY = 100;
		}
		App.display();
	}
	return 0;
}
