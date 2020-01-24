#include <cstdlib>
#include <ctime>
#include <iostream>
#include <Windows.h>


int main()
{
    int playerScore = 0;
    int computerScore = 0;
    char choice;

    int roll;
    int turnTotal = 0;

    int player = 0;
    int computer = 0;

    srand(time(0));
    player = rand() % 2 + 1;

    std::cout << "You will be player " << player << "." << std::endl;
    std::cout << "Enter R to roll; enter any other character to hold." << std::endl;

    if (player == 1) {
        computer == 2;
        std::cout << "Player 1 score: " << playerScore << std::endl;
        std::cout << "Player 2 score: " << computerScore << std::endl;
        std::cout << "It is player 1's turn." << std::endl;
        do {
            roll = 0;
            turnTotal = 0;
            while ((roll != 1) || (choice != 'h')) {
                std::cin >> choice;
                if ((choice == 'R') || (choice == 'r')) {
                    srand(time(0));
                    roll = (rand() % 6) + 1;
                    std::cout << "Roll: " << roll << std::endl;
                    if (roll == 1) {
                        turnTotal = 0;
                        std::cout << "Turn total: " << turnTotal << std::endl;
                        break;
                    }
                    else {
                        turnTotal += roll;
                        if (playerScore + turnTotal >= 100)
                            break;
                    }
                }
                else {
                    roll = 0;
                    turnTotal = turnTotal + roll;
                    std::cout << "Turn total: " << turnTotal << std::endl;

                    break;
                }
                std::cout << "Turn total: " << turnTotal << "   Roll/Hold?" << std::endl;
            }
            roll = 0;
            turnTotal = turnTotal + roll;
            playerScore = playerScore + turnTotal;
            std::cout << "New score: " << playerScore << "\n" << std::endl;
            std::cout << "Player 1 score: " << playerScore << std::endl;
            std::cout << "Player 2 score: " << computerScore << std::endl;
            if (playerScore >= 100) {
                std::cout << "Player 1 has won!" << std::endl;
                break;
                break;
            }
            else if (computerScore >= 100) {
                std::cout << "Player 2 has won!" << std::endl;
                break;
                break;
            }
            std::cout << "It is now player 2's turn." << std::endl;

            roll = 0;
            turnTotal = 0;
            while ((roll != 1) || (turnTotal < 20)) {
                Sleep(1250);
                srand(time(0));
                roll = rand() % 6 + 1;
                if (turnTotal < 20) {
                    std::cout << "Roll: " << roll << std::endl;
                    if (roll == 1) {
                        turnTotal = 0;
                        std::cout << "Turn total: " << turnTotal << std::endl;
                        break;
                    }
                    else {
                        turnTotal += roll;
                        if (computerScore + turnTotal >= 100)
                            break;
                    }
                }
                else if (turnTotal >= 20) {
                    roll = 0;
                    turnTotal = turnTotal + roll;
                    std::cout << "Turn total: " << turnTotal << std::endl;
                    if (computerScore + turnTotal >= 100)
                        break;
                    break;
                }
                std::cout << "Turn total: " << turnTotal << "   Roll/Hold?" << std::endl;

            }
            roll = 0;
            turnTotal = turnTotal + roll;
            computerScore = computerScore + turnTotal;
            std::cout << "New score: " << computerScore << "\n" << std::endl;
            std::cout << "Player 1 score: " << playerScore << std::endl;
            std::cout << "Player 2 score: " << computerScore << std::endl;
            if (playerScore >= 100) {
                std::cout << "Player 1 has won!" << std::endl;
                break;
                break;
            }
            else if (computerScore >= 100) {
                std::cout << "Player 2 has won!" << std::endl;
                break;
                break;
            }
            std::cout << "It is now player 1's turn." << std::endl;
        } while (player == 1);

    }
    if (player == 2) {
        computer == 1;
        std::cout << "Player 1 score: " << computerScore << std::endl;
        std::cout << "Player 2 score: " << playerScore << std::endl;
        std::cout << "It is player 1's turn." << std::endl;
        do {
            roll = 0;
            turnTotal = 0;
            while ((roll != 1) || (turnTotal < 20)) {
                Sleep(1250);
                srand(time(0));
                roll = rand() % 6 + 1;
                if (turnTotal < 20) {
                    std::cout << "Roll: " << roll << std::endl;
                    if (roll == 1) {
                        turnTotal = 0;
                        std::cout << "Turn total: " << turnTotal << std::endl;
                        break;
                    }
                    else {
                        turnTotal += roll;
                        if (computerScore + turnTotal >= 100)
                            break;
                    }
                }
                else if (turnTotal >= 20) {
                    roll = 0;
                    turnTotal = turnTotal + roll;
                    std::cout << "Turn total: " << turnTotal << std::endl;
                    if (computerScore + turnTotal >= 100)
                        break;
                    break;
                }
                std::cout << "Turn total: " << turnTotal << "   Roll/Hold?" << std::endl;

            }
            roll = 0;
            turnTotal = turnTotal + roll;
            computerScore = computerScore + turnTotal;
            std::cout << "New score: " << computerScore << "\n" << std::endl;
            std::cout << "Player 1 score: " << computerScore << std::endl;
            std::cout << "Player 2 score: " << playerScore << std::endl;
            if (playerScore >= 100) {
                std::cout << "Player 2 has won!" << std::endl;
                break;
                break;
            }
            else if (computerScore >= 100) {
                std::cout << "Player 1 has won!" << std::endl;
                break;
                break;
            }
            std::cout << "It is now player 2's turn." << std::endl;

            roll = 0;
            turnTotal = 0;
            while ((roll != 1) || (choice != 'h')) {
                std::cin >> choice;
                if ((choice == 'R') || (choice == 'r')) {
                    srand(time(0));
                    roll = (rand() % 6) + 1;
                    std::cout << "Roll: " << roll << std::endl;
                    if (roll == 1) {
                        turnTotal = 0;
                        std::cout << "Turn total: " << turnTotal << std::endl;
                        break;
                    }
                    else {
                        turnTotal += roll;
                        if (playerScore + turnTotal >= 100)
                            break;
                    }
                }
                else {
                    roll = 0;
                    turnTotal = turnTotal + roll;
                    std::cout << "Turn total: " << turnTotal << std::endl;

                    break;
                }
                std::cout << "Turn total: " << turnTotal << "   Roll/Hold?" << std::endl;
            }
            roll = 0;
            turnTotal = turnTotal + roll;
            playerScore = playerScore + turnTotal;
            std::cout << "New score: " << playerScore << "\n" << std::endl;
            std::cout << "Player 1 score: " << computerScore << std::endl;
            std::cout << "Player 2 score: " << playerScore << std::endl;
            if (playerScore >= 100) {
                std::cout << "Player 2 has won!" << std::endl;
                break;
                break;
            }
            else if (computerScore >= 100) {
                std::cout << "Player 1 has won!" << std::endl;
                break;
                break;
            }
            std::cout << "It is now player 1's turn." << std::endl;

           
        } while (player == 2);
    }
}