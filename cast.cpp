#include <iostream>

int main(){

    int correct = 8;
    int questions = 10;

    double percent = (double) correct /  questions * 100;

    std::cout << percent << "%\n";
    return 0;
}