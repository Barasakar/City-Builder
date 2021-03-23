#ifndef GAME_STATE_HPP //ifndef will prevent redeclaration of any identifiers in GAME_STATE_HPP.
#define GAME_STATE_HPP

#include "game.hpp"

class GameState {
public:
  Game* game; // game is a pointer back to the state manager.

  /* The = 0 at the end of the method means that the method is a pure virtual
  method meaning that it does not have an implementation and it delegates
  the task of implementing the method to the classes that is derived from it */
  virtual void draw (const float dt) = 0;
  virtual void update(const float dt) = 0;
  virtual void handleInput() = 0;

};

#endif /*GAME_STATE_HPP*/
