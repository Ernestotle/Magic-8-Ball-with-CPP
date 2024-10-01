#include <iostream>
#include <cstdlib>

int main() {

    // Your future is here
    std::cout << "MAGIC 8-BALL:\n";

    // Generate a random number
    srand(time(NULL));
    int num = std::rand() % 10;
    std::cout << "The chosen number is " << num << " .\n";

    // Determine the outcome
    if (num == 0) {
        std::cout << "It is certain.\n";
    } else if (num == 1) {
        std::cout << "It is decidedly so.\n";
    } else if (num == 2) {
        std::cout << "Without a doubt.\n";
    } else if (num == 3) {
        std::cout << "Yes - definitely.\n";
    } else if (num == 4) {
        std::cout << "You may rely on it.\n";
    } else if (num == 5) {
        std::cout << "As I see it, yes.\n";
    } else if (num == 6) {
        std::cout << "Most likely.\n";
    } else if (num == 7) {
        std::cout << "Outlook good.\n";
    } else if (num == 8) {
        std::cout << "Yes.\n";
    } else {
        std::cout << "Very doubtful.\n";
    }

}