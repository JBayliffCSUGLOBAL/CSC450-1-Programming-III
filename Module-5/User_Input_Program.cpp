#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int main() {
    std::string userInput;
    std::string fileContent;
    
    // Step 1: Open the file to append user input
    std::ofstream outFile("CSC450_CT5_mod5.txt", std::ios::app);
    if (!outFile) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    // Step 2: Get input from the user
    std::cout << "Enter text to append to the file: ";
    std::getline(std::cin, userInput);

    // Step 3: Write user input to the file
    outFile << userInput << std::endl;
    outFile.close();

    // Step 5: Read content from the file
    std::ifstream inFile("CSC450_CT5_mod5.txt");
    if (!inFile) {
        std::cerr << "Error opening file for reading." << std::endl;
        return 1;
    }

    // Step 6: Read the entire file into a string
    std::getline(inFile, fileContent, '\0');
    inFile.close();

    // Step 6: Reverse the file content
    std::reverse(fileContent.begin(), fileContent.end());

    // Step 7: Write reversed content to a new file
    std::ofstream reverseFile("CSC450-mod5-reverse.txt");
    if (!reverseFile) {
        std::cerr << "Error opening file for writing reversed content." << std::endl;
        return 1;
    }
    reverseFile << fileContent;
    reverseFile.close();

    std::cout << "User input added and file content reversed." << std::endl;
    
    return 0;
}
