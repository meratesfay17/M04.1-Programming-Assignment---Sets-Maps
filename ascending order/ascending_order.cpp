#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <algorithm>

int main() {
    // Open the input file
    std::ifstream file("input.txt");
    // Check if the file is opened successfully
    if (!file.is_open()) {
        std::cerr << "Error opening file." << std::endl; // Print error message if file cannot be opened
        return 1; // Return 1 to indicate error
    }

    // Set to store unique words
    std::set<std::string> uniqueWords;
    std::string word;

    // Read words from file
    while (file >> word) {
        // Convert word to lowercase
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        // Remove non-alphabetic characters
        word.erase(std::remove_if(word.begin(), word.end(), [](char c) { return !std::isalpha(c); }), word.end());
        // Insert word into set
        if (!word.empty()) {
            uniqueWords.insert(word);
        }
    }

    // Print unique words in ascending order
    std::cout << "Non-duplicate words in ascending order:" << std::endl;
    for (const auto& w : uniqueWords) {
        std::cout << w << std::endl;
    }

    file.close(); // Close the file
    return 0; // Return 0 to indicate success
}
