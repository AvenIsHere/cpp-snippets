#include <iostream>
#include <string>
#include <vector>

std::vector<std::tuple<int, std::string>> num_replace = {
    {3, "Fizz"},
    {5, "Buzz"}
};
constexpr size_t list_size = 100;

void process_num(const size_t num) {
    bool word_printed = false;
    for (const auto& [replace_num, str] : num_replace) {
        if (num % replace_num == 0) {
            std::cout << str;
            word_printed = true;
        }
    }
    if (!word_printed) std::cout << num;
    std::cout << std::endl;
}

int main() {
    for (size_t i = 1; i <= list_size; i++) {
        process_num(i);
    }
}