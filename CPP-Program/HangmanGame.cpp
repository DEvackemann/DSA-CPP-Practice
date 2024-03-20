#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm> // Include the <algorithm> header for std::find

class HangmanGame {
private:
    std::string word; // The word to guess
    std::string guessedWord; // The word with guessed letters revealed
    int attemptsLeft; // Number of attempts left
    std::vector<char> guessedLetters; // Letters guessed by the player

public:
    HangmanGame(const std::string& word) : word(word), attemptsLeft(6) {
        guessedWord = std::string(word.length(), '_');
    }

    bool guess(char letter) {
        if (std::find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end()) {
            std::cout << "You've already guessed this letter. Try another one." << std::endl;
            return false;
        }

        guessedLetters.push_back(letter);

        bool found = false;
        for (size_t i = 0; i < word.length(); ++i) {
            if (word[i] == letter) {
                guessedWord[i] = letter;
                found = true;
            }
        }

        if (!found) {
            attemptsLeft--;
            std::cout << "Incorrect guess. Attempts left: " << attemptsLeft << std::endl;
        }

        return found;
    }

    bool isGameOver() const {
        return attemptsLeft <= 0 || guessedWord == word;
    }

    void displayStatus() const {
        std::cout << "Guessed word: " << guessedWord << std::endl;
        std::cout << "Guessed letters: ";
        for (char letter : guessedLetters) {
            std::cout << letter << " ";
        }
        std::cout << std::endl;
    }

    bool isWin() const {
        return guessedWord == word;
    }
};

int main() {
    // Create a list of words to choose from
    std::vector<std::string> words = {"hangman", "programming", "computer", "language"};

    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Choose a random word from the list
    std::string word = words[std::rand() % words.size()];

    HangmanGame game(word);

    while (!game.isGameOver()) {
        game.displayStatus();

        char guess;
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        game.guess(guess);

        std::cout << std::endl;
    }

    if (game.isWin()) {
        std::cout << "Congratulations! You've guessed the word: " << word << std::endl;
    } else {
        std::cout << "Sorry, you've lost. The word was: " << word << std::endl;
    }

    return 0;
}
