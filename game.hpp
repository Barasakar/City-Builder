#ifndef GAME_HPP
#define GAME_HPP

#include <stack>
#include <SFML/Graphics.hpp>



class GameState;

class Game {
public:

  std::stack<GameState*> states; // the states will be loaded in stack
  sf::RenderWindow window;

  void pushState(GameState *state);
  void popState();
  void changeState(GameState *state);
  GameState* peekState();

  void gameLoop(); // this will act like "main" in our program

  Game(); //Constructor
  ~Game(); //Destructor

};

#endif
