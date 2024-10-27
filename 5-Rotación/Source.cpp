#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

Texture texture_cuadrado;
Sprite cuadrado;

int main() {

    texture_cuadrado.loadFromFile("cuad_red.png");
    cuadrado.setTexture(texture_cuadrado);

    cuadrado.setOrigin((float)texture_cuadrado.getSize().x / 2, (float)texture_cuadrado.getSize().y / 2);

    RenderWindow App(VideoMode(800, 800, 32), "Unidad 3 Rotación");
    while (App.isOpen()) {

        App.clear();
        cuadrado.rotate(0.1f);
        cuadrado.setPosition(400, 400);
        App.draw(cuadrado);

        App.display();
    }
    return 0;
}