#include "../include/decryptor.h"
#include <fstream>
#include <iostream>

void decryptFile(const std::string &inputFile, const std::string &outputFile, const std::string &key) {
    std::ifstream in(inputFile, std::ios::binary);
    std::ofstream out(outputFile, std::ios::binary);

    if (!in || !out) {
        std::cerr << "Error: Could not open file(s)!\n";
        return;
    }

    char ch;
    size_t keyLen = key.length();
    
    for (size_t i = 0; in.get(ch); i++) {
        ch ^= key[i % keyLen];  // XOR decryption (same as encryption)
        out.put(ch);
    }

    std::cout << "Decryption complete.\n";
}
