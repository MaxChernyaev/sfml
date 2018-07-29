#include <SFML/Graphics.hpp>
#include <QTime>
#include <QDebug>

int main()
{
    int i1 = 0;
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    QTime t;
    t.start();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();

        i1++;
        qDebug() << "i1 = " << i1;
        if (t.elapsed() >= 1000) break;
    }

    return 0;
}
