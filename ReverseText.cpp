#include <iostream>

int wordLength(char arr[]) {
    int length = 0;
    while (arr[length] != '\0') {
        length++;
    }
    return length;
}

void reverseWord(char arr[]) {
    int length = wordLength(arr);
    int first = 0;
    int last = length - 1;
    char a;

    while (first < last) {
        a = arr[first];
        arr[first] = arr[last];
        arr[last] = a;

        first++;
        last--;
    }
}

int main() {
    char word[] = "";
    std::cout << "Enter a word: ";
    std::cin >> word;

    std::cout << "\nOriginal word: " << word << std::endl;

    reverseWord(word);

    std::cout << "Reversed word: " << word << std::endl;

    return 0;
}
