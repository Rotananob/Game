// New Console Game: Technology Quiz Game
#include <iostream>
#include <string>
#include <vector>

struct Question {
    std::string question;
    std::vector<std::string> options;
    int answer; // index of correct option
};

int main() {
    std::vector<Question> quiz = {
        {" ????????????????????C++?", {"Microsoft", "Bjarne Stroustrup", "Apple", "Google"}, 1},
        {"What does CPU stand for?", {"Central Processing Unit", "Computer Personal Unit", "Central Print Unit", "Control Power Unit"}, 0},
        {"Which of these is a programming language?", {"HTML", "Python", "CSS", "HTTP"}, 1},
        {"What does RAM stand for?", {"Random Access Memory", "Read Any Memory", "Rapid Application Mode", "Run All Memory"}, 0}
    };

    int score = 0;
    for (size_t i = 0; i < quiz.size(); ++i) {
        std::cout << "Q" << i + 1 << ": " << quiz[i].question << std::endl;
        for (size_t j = 0; j < quiz[i].options.size(); ++j) {
            std::cout << j + 1 << ". " << quiz[i].options[j] << std::endl;
        }
        int userAnswer;
        std::cout << "Your answer (1-4): ";
        std::cin >> userAnswer;
        if (userAnswer - 1 == quiz[i].answer) {
            std::cout << "Correct!\n";
            score++;
        }
        else {
            std::cout << "Wrong! Correct answer: " << quiz[i].options[quiz[i].answer] << "\n";
        }
        std::cout << std::endl;
    }

    std::cout << "Quiz finished! Your total score: " << score << " out of " << quiz.size() << std::endl;

    return 0;
}
