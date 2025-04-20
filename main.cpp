#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cmath>

sf::SoundBuffer buffer("Sounds/C Note.mp3");
int main() {

  // anti aliasing
  sf::ContextSettings settings;
  settings.antiAliasingLevel = 4;

  // create window
  sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "Piano",
                          sf::State::Windowed, settings);

  // load sound
  sf::Sound sound_C1(buffer);
  sound_C1.setPitch(0.5f);
  sf::Sound sound_C1S(buffer);
  sound_C1S.setPitch(std::pow(2, -11 / 12.f));
  sf::Sound sound_D1(buffer);
  sound_D1.setPitch(std::pow(2, -10 / 12.f));
  sf::Sound sound_D1S(buffer);
  sound_D1S.setPitch(std::pow(2, -9 / 12.f));
  sf::Sound sound_E1(buffer);
  sound_E1.setPitch(std::pow(2, -8 / 12.f));
  sf::Sound sound_F1(buffer);
  sound_F1.setPitch(std::pow(2, -7 / 12.f));
  sf::Sound sound_F1S(buffer);
  sound_F1S.setPitch(std::pow(2, -6 / 12.f));
  sf::Sound sound_G1(buffer);
  sound_G1.setPitch(std::pow(2, -5 / 12.f));
  sf::Sound sound_G1S(buffer);
  sound_G1S.setPitch(std::pow(2, -4 / 12.f));
  sf::Sound sound_A1(buffer);
  sound_A1.setPitch(std::pow(2, -3 / 12.f));
  sf::Sound sound_A1S(buffer);
  sound_A1S.setPitch(std::pow(2, -2 / 12.f));
  sf::Sound sound_B1(buffer);
  sound_B1.setPitch(std::pow(2, -1 / 12.f));
  sf::Sound sound_C2(buffer);
  sf::Sound sound_C2S(buffer);
  sound_C2S.setPitch(std::pow(2, 1 / 12.f));
  sf::Sound sound_D2(buffer);
  sound_D2.setPitch(std::pow(2, 2 / 12.f));
  sf::Sound sound_D2S(buffer);
  sound_D2S.setPitch(std::pow(2, 3 / 12.f));
  sf::Sound sound_E2(buffer);
  sound_E2.setPitch(std::pow(2, 4 / 12.f));
  sf::Sound sound_F2(buffer);
  sound_F2.setPitch(std::pow(2, 5 / 12.f));
  sf::Sound sound_F2S(buffer);
  sound_F2S.setPitch(std::pow(2, 6 / 12.f));
  sf::Sound sound_G2(buffer);
  sound_G2.setPitch(std::pow(2, 7 / 12.f));
  sf::Sound sound_G2S(buffer);
  sound_G2S.setPitch(std::pow(2, 8 / 12.f));
  sf::Sound sound_A2(buffer);
  sound_A2.setPitch(std::pow(2, 9 / 12.f));
  sf::Sound sound_A2S(buffer);
  sound_A2S.setPitch(std::pow(2, 10 / 12.f));
  sf::Sound sound_B2(buffer);
  sound_B2.setPitch(std::pow(2, 11 / 12.f));
  sf::Sound sound_C3(buffer);
  sound_C3.setPitch(2.f);

  // keep window open
  while (window.isOpen()) {
    // handle events
    while (std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      } else if (event->is<sf::Event::Resized>()) {
        sf::View view(
            sf::FloatRect({ 0.f, 0.f }, sf::Vector2f(window.getSize())));
        window.setView(view);
      } else if (auto key = event->getIf<sf::Event::KeyPressed>()) {
        if (key->scancode == sf::Keyboard::Scancode::A) {
          if (key->shift)
            sound_C1S.play();
          else
            sound_C1.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::Tab) {
          if (key->shift)
            sound_D1S.play();
          else
            sound_D1.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::Q) {
          sound_E1.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::W) {
          if (key->shift)
            sound_F1S.play();
          else
            sound_F1.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::E) {
          if (key->shift)
            sound_G1S.play();
          else
            sound_G1.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::R) {
          if (key->shift)
            sound_A1S.play();
          else
            sound_A1.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::T) {
          sound_B1.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::Y) {
          if (key->shift)
            sound_C2S.play();
          else
            sound_C2.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::U) {
          if (key->shift)
            sound_D2S.play();
          else
            sound_D2.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::I) {
          sound_E2.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::O) {
          if (key->shift)
            sound_F2S.play();
          else
            sound_F2.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::P) {
          if (key->shift)
            sound_G2S.play();
          else
            sound_G2.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::LBracket) {
          if (key->shift)
            sound_A2S.play();
          else
            sound_A2.play();
        }
        if (key->scancode == sf::Keyboard::Scancode::RBracket) {
          sound_B2.play();
        }
      }
    }

    // window size
    float window_w = window.getView().getSize().x,
          window_h = window.getView().getSize().y,
          window_min = std::min(window_w, window_h);

    // parameters

    // fill window with color
    window.clear(sf::Color(39, 39, 39));

    // draw

    // display
    window.display();
  }
  return 0;
}
