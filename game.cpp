#include <stack>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "game_state.hpp"
#include "game.hpp"

void Game::pushState(GameState *state) {
  states.push(state);
  return;
}
void Game::popState() {

  delete states.top();
  states.pop();
  return;
}
void Game::changeState(GameState *state) {
 if (!states.empty()) {
   popState();
 }
 pushState(state);

 return;
}
