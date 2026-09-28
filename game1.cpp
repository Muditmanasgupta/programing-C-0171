#

int NOT(int a) {
    if (a >= 1 && a <= 5) {
        return 1;
    } else {
        std::cout << "invalid choice\n";
        return 0;
    }
}

int game() {
    int score = 0;
    int guess = rand() % 5 + 1; // Random number between 1 and 5
    int a;
    
    std::cout << "Enter your guess: ";
    std::cin >> a;
    
    while (NOT(a) == 0) {
        std::cout << "Enter a valid choice between 1 and 5: ";
        std::cin >> a;
    }
    
    std::cout << "Your guess is: " << a << "\n";
    std::cout << "Computer chose: " << guess << "\n";
    
    // Equivalent to Python's while loop
    while (a == guess) {
        score++;
        std::cout << "Your score is: " << score << "\n";
        guess = rand() % 5 + 1;
        
        std::cout << "Enter your guess: ";
        std::cin >> a;
        
        while (NOT(a) == 0) {
            std::cout << "Enter a valid choice between 1 and 5: ";
            std::cin >> a;
        }
        
        std::cout << "Your guess is: " << a << "\n";
        std::cout << "Computer chose: " << guess << "\n";
    }
    
    // Executed when a != guess (replaces Python's while-else block)
    std::cout << "Your Guess is not same as what Computer chose, Hence: \n";
    std::cout << "Game over: \n";
    std::cout << "Your score is " << score << "\n";
    
    // File handling for high score
    std::string highscoreStr = "";
    std::ifstream inFile("ch9/Highscore.txt");
    if (inFile.is_open()) {
        std::getline(inFile, highscoreStr);
        inFile.close();
    }
    
    std::cout << "Previous high score was " << highscoreStr << "\n";
    
    int highscore = 0;
    if (highscoreStr != "") {
        highscore = std::stoi(highscoreStr);
    }
    
    if (score > highscore) {
        std::ofstream outFile("ch9/Highscore.txt");
        if (outFile.is_open()) {
            outFile << score;
            outFile.close();
        }
        