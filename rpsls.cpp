/*
Playing Rock, Paper, Scissors, Lizard, Spock against the computer;
You select one option, the computer randomly selects one. Then the choices will be compared accordingly to the rules and the winner will be announced;
*/

#include <iostream>
#include <stdlib.h>

int main() {

  bool another_game = true;

  std::cout << "\n";
  std::cout << "=================================\n";
  std::cout << "Rock Paper Scissors Lizard Spock!\n";
  std::cout << "=================================\n\n";

  std::cout << "Introduction: Play Rock, Paper, Scissors, Lizard, Spock against the computer.\nYou select one option by entering the number and the computer selects one randomly.\nHave fun!\n\n";

  while (another_game){

    srand(time(NULL));

    int computer = rand() % 5 + 1;
    int user = 0;

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";
    std::cout << "4) 🦎\n";
    std::cout << "5) 🖖\n";
    std::cout << "\n";
    std::cout << "shoot! ";

    std::cin >> user;
    std::cout << "\n";

    // user choice
    if (user == 1){
      std::cout << "Your choice: ✊\n";
    }
    else if (user == 2){
      std::cout << "Your choice: ✋\n";
    }
    else if (user == 3){
      std::cout << "Your choice: ✌️\n";
    }
    else if (user == 4){
      std::cout << "Your choice: 🦎\n";
    }
    else{
      std::cout << "Your choice: 🖖\n";
    }

    // computer choice
    if (computer == 1){
      std::cout << "Computer choice: ✊\n";
    }
    else if (computer == 2){
      std::cout << "Computer choice: ✋\n";
    }
    else if (computer == 3){
      std::cout << "Computer choice: ✌️\n";
    }
    else if (computer == 4){
      std::cout << "Computer choice: 🦎\n";
    }
    else{
      std::cout << "Computer choice: 🖖\n";
    }
    std::cout << "\n";
    // find winner
    if (computer == user){
      std::cout << "TIE!\n";
    }

    // computer rock
    else if (computer == 1){
      if (user == 2){
        std::cout << "Paper covers Rock -> YOU WIN!\n";
      }
      else if (user == 3){
        std::cout << "Rock crushes Scissors -> YOU LOOSE!\n";
      }
      else if (user == 4){
        std::cout << "Rock crushes Lizard -> YOU WIN!\n";
      }
      else{
        std::cout << "Spock vaporizes Rock -> YOU WIN!\n";
      }
    }

    // computer paper
    else if (computer == 2){
      if (user == 1){
        std::cout << "Paper covers Rock -> YOU LOOSE!\n";
      }
      else if (user == 3){
        std::cout << "Scissors cuts Paper -> YOU WIN!\n";
      }
      else if (user == 4){
        std::cout << "Lizard eats Paper -> YOU WIN!\n";
      }
      else{
        std::cout << "Paper disproves Spock -> YOU LOOSE!\n";
      }
    }

    // computer scissors
    else if (computer == 3){
      if (user == 1){
        std::cout << "Rock crushes Scissors -> YOU WIN!\n";
      }
      else if (user == 2){
        std::cout << "Scissors cuts Paper -> YOU LOOSE!\n";
      }
      else if (user == 4){
        std::cout << "Scissors decapitate Lizard -> YOU LOOSE!\n";
      }
      else{
        std::cout << "Spock smashes Scissors -> YOU WIN!\n";
      }
    }

    // coputer lizard
    else if (computer == 4){
      if (user == 1){
        std::cout << "Rock crushes Lizard -> YOU WIN!\n";
      }
      else if (user == 2){
        std::cout << "Lizard eats Paper -> YOU LOOSE!\n";
      }
      else if (user == 3){
        std::cout << "Scissors decapitate Lizard -> YOU WIN!\n";
      }
      else{
        std::cout << "Lizard poisons Spock -> YOU LOOSE!\n";
      }
    }

    // computer spock
    else if (computer == 5){
      if (user == 1){
        std::cout << "Spock vaporizes Rock -> YOU LOOSE!\n";
      }
      else if (user == 2){
        std::cout << "Paper disproves Spock -> YOU WIN!\n";
      }
      else if (user == 3){
        std::cout << "Spock smashes Scissors -> YOU LOOSE!\n";
      }
      else{
        std::cout << "Lizard poisons Spock -> YOU WIN!\n";
      }
    }
    std::cout << "\n";
    std::cout << "Great game! Wanna play again? Type 'n' for no or 'y' for yes.\n";

    std::string input = "";

    bool correct_choice = false;

    while (!correct_choice){
      std::cin >> input;

      if (input == "n"){
        another_game = false;
        correct_choice = true;
      }

      else if (input == "y"){
        another_game = true;
        correct_choice = true;
      }

      else{
        std::cout << "This is not a valid option. Please type in 'y' or 'n'.\n";
      }
    }
  }
}
