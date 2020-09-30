 //Rock Paper Scissors

#include <iostream>
#include <stdlib.h>

int main() {

  //Determine computer's move
  srand (time(NULL));

  int computer = rand() % 3 + 1;

  //Determine user's move
  int user = 0;

  std::cout <<
  "====================\n";
  std::cout << "Rock Paper Scissors!\n";
  std::cout << 
  "====================\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";

  std::cout << "Shoot!\n";

  std::cin >> user;

  //Logic/conditionals
  //User picks rock
  if (user == 1) {
    if (computer == 1) {

      std::cout << "Computer chose rock!\n";
      std::cout << "Draw!\n";

    } else if (computer == 2) {

        std::cout << "Computer chose paper!\n";
        std::cout << "You lose!\n";

    } else {

      std::cout << "Computer chose scissors!\n";
        std::cout << "You win!\n";
    
    }
  }

//User picks paper
   if (user == 2) {
    if (computer == 1) {

      std::cout << "Computer chose rock!\n";
      std::cout << "You win!\n";

    } else if (computer == 2) {

        std::cout << "Computer chose paper!\n";
        std::cout << "Draw!\n";

    } else {

      std::cout << "Computer chose scissors!\n";
        std::cout << "You lose!\n";
    
    }
  }

//User picks scissors
   if (user == 3) {
    if (computer == 1) {

      std::cout << "Computer chose rock!\n";
      std::cout << "You lose!\n";

    } else if (computer == 2) {

        std::cout << "Computer chose paper!\n";
        std::cout << "You win!\n";

    } else {

      std::cout << "Computer chose scissors!\n";
        std::cout << "Draw!\n";
    
    }
  }

}
