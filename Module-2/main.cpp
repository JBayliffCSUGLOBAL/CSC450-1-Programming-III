#include <iostream>
#include <string>

int main() {
    std::string teamName;
    std::string cheer;
    std::string combined;

    // Loop to get input and display output three times
    for (int i = 1; i <= 3; ++i) {
        std::cout << "Round " << i << ": Enter your favorite college football team name: ";
        std::getline(std::cin, teamName);

        std::cout << "Enter a cheer for the team: ";
        std::getline(std::cin, cheer);

        // Concatenate team name and cheer
        combined = teamName + " - " + cheer;

        // Display the result
        std::cout << "Combined Output: " << combined << std::endl << std::endl;
    }

    return 0;
}
