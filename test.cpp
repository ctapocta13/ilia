#include <iostream>
using namespace std;
class Card {
  public:
    /*
    *  что эта срань делает, возвразает и принимает на отдельных строках
    */
    Card(char mastCreate, char valueCreate){
      mast = mastCreate;
      value = valueCreate;
    }

    void onScreen(){
      cout << mast << "|" << value << endl;
    }

  private:
    char mast;
    char value;
    
};

class Coloda{
  int cards;
  public:
    Coloda(int cardsCount)
    {
    }
    void shuffle(){
  
  }
};

class Player{
  public:
    Player() {}

};

class Game{};

// class BlackJack: public Game{
// }; 

int main()
{
  cout << "hello world. classes added and 2 objects" << endl;

  Card cart1('b', '6');
  Card cart2('p', '7');

  cart1.onScreen();
  cart2.onScreen();

  return 0;
}
