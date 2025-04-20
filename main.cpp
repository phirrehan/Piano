#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cmath>

sf::SoundBuffer buffer("Sounds/C Note.mp3");

class Sound {

private:
  std::vector<sf::Sound> soundPool;
  const int PoolSize = 10;
  float pitch = 1.f; // 1.f is default pitch

public:
  Sound() {
    for (int i = 0; i < PoolSize; i++) {
      soundPool.emplace_back(buffer);
    }
  }

  float getPitch() { return pitch; }
  void setPitch(float p) { pitch = p; }

  void play() {
    for (auto &sound : soundPool) {
      if (sound.getStatus() != sf::Sound::Status::Playing) {
        sound.setPitch(pitch);
        sound.play();
        break;
      }
    }
  }
};

int main() {

  // anti aliasing
  sf::ContextSettings settings;
  settings.antiAliasingLevel = 4;

  // create window
  sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "Piano",
                          sf::State::Windowed, settings);

  // load sound
  Sound sound[26];
  int n = sizeof(sound) / sizeof(sound[0]);
  for (int i = 0; i < n; i++) {
    sound[i].setPitch(std::pow(2, (i - 12) / 12.f));
  }
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
            sound[1].play(); // C1#
          else
            sound[0].play(); // C1
        }
        if (key->scancode == sf::Keyboard::Scancode::Tab) {
          if (key->shift)
            sound[3].play(); // D1#
          else
            sound[2].play(); // D1
        }
        if (key->scancode == sf::Keyboard::Scancode::Q) {
          sound[4].play(); // E1
        }
        if (key->scancode == sf::Keyboard::Scancode::W) {
          if (key->shift)
            sound[6].play(); // F1#
          else
            sound[5].play(); // F1
        }
        if (key->scancode == sf::Keyboard::Scancode::E) {
          if (key->shift)
            sound[8].play(); // G1#
          else
            sound[7].play(); // G1
        }
        if (key->scancode == sf::Keyboard::Scancode::R) {
          if (key->shift)
            sound[10].play(); // A1#
          else
            sound[9].play(); // A1
        }
        if (key->scancode == sf::Keyboard::Scancode::T) {
          sound[11].play(); // B1
        }
        if (key->scancode == sf::Keyboard::Scancode::Y) {
          if (key->shift)
            sound[13].play(); // C2#
          else
            sound[12].play(); // C2
        }
        if (key->scancode == sf::Keyboard::Scancode::U) {
          if (key->shift)
            sound[15].play(); // D2#
          else
            sound[14].play(); // D2
        }
        if (key->scancode == sf::Keyboard::Scancode::I) {
          sound[16].play(); // E2
        }
        if (key->scancode == sf::Keyboard::Scancode::O) {
          if (key->shift)
            sound[18].play(); // F2#
          else
            sound[17].play(); // F2
        }
        if (key->scancode == sf::Keyboard::Scancode::P) {
          if (key->shift)
            sound[20].play(); // G2#
          else
            sound[19].play(); // G2
        }
        if (key->scancode == sf::Keyboard::Scancode::LBracket) {
          if (key->shift)
            sound[22].play(); // A2#
          else
            sound[21].play(); // A2
        }
        if (key->scancode == sf::Keyboard::Scancode::RBracket) {
          sound[23].play(); // B2
        }

        if (key->scancode == sf::Keyboard::Scancode::Backslash) {
          if (key->shift)
            sound[25].play(); // C3#
          else
            sound[24].play(); // C3
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
