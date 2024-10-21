// validates code if its 2 alphabetic + 4 numeric
// code by Ryuya

#include <iostream>
#include <string>

bool validate_number(std::string &num) {
    if (num.size() != 6) {
        return false;
    }
    
    int i = 0;
    // 2 alphabetic
    for (i; i < 2; ++i) {
        if (num[i] >= 'A' && num[i] <= 'z') {
            continue;
        } else {
            return false;
        }
    }
    
    // 4 numeric
    for (i; i < 6; ++i) {
        if (num[i] >= '0' && num[i] <= '9') {
            continue;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    std::string customer_number = "AB3842";
    std::string invalid_number = "238bs(";

    // test cases
    std::cout << customer_number << ": " << (validate_number(customer_number) ? "valid" : "invalid") << std::endl;
    std::cout << invalid_number << ": " << (validate_number(invalid_number) ? "valid" : "invalid") << std::endl;

    return 0;
}
