#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string tmp;
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    for (int i = 1; i < argc; i++) {
        tmp = argv[i];
        for (int j = 0; argv[i][j]; j++)
            std::cout << (char)std::toupper(argv[i][j]);
        if (argv[i + 1])
            std::cout << " ";
    }
    std::cout << "\n";
    return (0);
}