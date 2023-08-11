#include <iostream>
#include <cstring>
#include <utility>

class String {
private:
    char* str;

public:
    // Constructor
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
        std::cout << "Constructor: " << str << std::endl;
    }

    // Copy Constructor
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
        std::cout << "Copy Constructor: " << str << " (Copied from: " << other.str << ")" << std::endl;
    }

    // Move Constructor
    String(String&& other) noexcept {
        str = other.str;
        other.str = nullptr;
        std::cout << "Move Constructor: " << str << " (Moved from: " << (other.str ? other.str : "nullptr") << ")" << std::endl;
    }

    // Copy Assignment Operator
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        std::cout << "Copy Assignment: " << str << " (Copied from: " << other.str << ")" << std::endl;
        return *this;
    }

    // Move Assignment Operator
    String& operator=(String&& other) noexcept {
        if (this != &other) {
            delete[] str;
            str = other.str;
            other.str = nullptr;
        }
        std::cout << "Move Assignment: " << str << " (Moved from: " << (other.str ? other.str : "nullptr") << ")" << std::endl;
        return *this;
    }

    // Destructor
    ~String() {
        delete[] str;
        std::cout << "Destructor: " << str << std::endl;
    }

    const char* getStr() const {
        return str;
    }
};

int main() {
    // Using Copy Constructor
    std::cout << "Step 1: Creating original string." << std::endl;
    String original("Hello");
    std::cout << "Step 2: Creating copy using copy constructor." << std::endl;
    String copy = original;
    std::cout << "Step 3: Copy: " << copy.getStr() << std::endl;

    std::cout << "------------------------" << std::endl;

    // Using Move Constructor
    std::cout << "Step 4: Creating source string." << std::endl;
    String source("World");
    std::cout << "Step 5: Creating moved string using move constructor." << std::endl;
    String moved = std::move(source);
    std::cout << "Step 6: Moved: " << moved.getStr() << std::endl;
    std::cout << "Step 7: Source after move: " << (source.getStr() ? source.getStr() : "nullptr") << std::endl;

    std::cout << "------------------------" << std::endl;

    // Using Copy Assignment Operator
    std::cout << "Step 8: Creating source1 string." << std::endl;
    String source1("Copy me");
    std::cout << "Step 9: Creating target string." << std::endl;
    String target("Initial");
    std::cout << "Step 10: Performing copy assignment." << std::endl;
    target = source1;
    std::cout << "Step 11: Target after copy assignment: " << target.getStr() << std::endl;

    std::cout << "------------------------" << std::endl;

    // Using Move Assignment Operator
    std::cout << "Step 12: Creating source2 string." << std::endl;
    String source2("Move me");
    std::cout << "Step 13: Creating target2 string." << std::endl;
    String target2("Initial");
    std::cout << "Step 14: Performing move assignment." << std::endl;
    target2 = std::move(source2);
    std::cout << "Step 15: Target after move assignment: " << target2.getStr() << std::endl;
    std::cout << "Step 16: Source after move assignment: " << (source2.getStr() ? source2.getStr() : "nullptr") << std::endl;

    return 0;
}
