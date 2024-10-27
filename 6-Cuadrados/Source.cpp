#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture_blue;
Texture texture_grey;
Texture texture_yellow;
Texture texture_red;
Sprite blue;
Sprite grey;
Sprite yellow;
Sprite red;
float escalaX;
float escalaY;

int main() {
	texture_blue.loadFromFile("cuad_blue.png");
	texture_grey.loadFromFile("cuad_grey.png");
	texture_yellow.loadFromFile("cuad_yellow.png");
	texture_red.loadFromFile("cuad_red.png");

	blue.setTexture(texture_blue);
	grey.setTexture(texture_grey);
	yellow.setTexture(texture_yellow);
	red.setTexture(texture_red);

	escalaX = 400 / (float)texture_blue.getSize().x;
	escalaY = 400 / (float)texture_blue.getSize().y;
	blue.setScale(escalaX, escalaY);

	escalaX = 400 / (float)texture_grey.getSize().x;
	escalaY = 400 / (float)texture_grey.getSize().y;
	grey.setScale(escalaX, escalaY);

	escalaX = 400 / (float)texture_yellow.getSize().x;
	escalaY = 400 / (float)texture_yellow.getSize().y;
	yellow.setScale(escalaX, escalaY);

	escalaX = 400 / (float)texture_red.getSize().x;
	escalaY = 400 / (float)texture_red.getSize().y;
	red.setScale(escalaX, escalaY);

	RenderWindow App(VideoMode(800, 800, 32), "Unidad 3 Cuadrados");
	while (App.isOpen()){
		App.clear();
		blue.setPosition(0, 400);
		grey.setPosition(400, 400);
		yellow.setPosition(400, 0);
		red.setPosition(0, 0);
		App.draw(grey);
		App.draw(yellow);
		App.draw(red);
		App.draw(blue);
		App.display();
	}
	return 0;
}
