#include <iostream>
#include "../include/encryptor.h"
#include "../include/decryptor.h"

int main() {
    std::string inputFile, outputFile, key;
    int choice;

    std::cout << "=== File Encryption Tool ===\n";
    std::cout << "1. Encrypt a file\n";
    std::cout << "2. Decrypt a file\n";
    std::cout << "Enter choice: ";
    std::cin >> choice;

    std::cout << "Enter input file path: ";
    std::cin >> inputFile;
    std::cout << "Enter output file path: ";
    std::cin >> outputFile;
    std::cout << "Enter encryption key: ";
    std::cin >> key;

    if (choice == 1) {
        encryptFile(inputFile, outputFile, key);
        std::cout << "Encryption done!\n";
    } else if (choice == 2) {
        decryptFile(inputFile, outputFile, key);
        std::cout << "Decryption done!\n";
    } else {
        std::cout << "Invald option. Try again.\n";
    }

    return 0;
}
