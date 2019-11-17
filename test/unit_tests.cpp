#include "gtest/gtest.h"
#include "possible_parentheses.h"

void showResult(std::list<std::string> &result) {
    for (std::list<std::string>::iterator i = result.begin(); i != result.end(); ++i) {
        printf("%s\n", (*i).c_str());
    }
};

TEST(test_recursive, 1) {
    std::list<std::string> result;
    possibleParenthesis(1, result);

    ASSERT_TRUE(result.size() == 1);
    ASSERT_TRUE(result == std::list<std::string>{"{}"});
}

TEST(test_recursive, 2) {
    std::list<std::string> result;
    possibleParenthesis(2, result);

    ASSERT_TRUE(result.size() == 2);
    ASSERT_TRUE((result == std::list<std::string>{"{{}}", "{}{}"}));
}

TEST(test_recursive, 3) {
    std::list<std::string> result;
    possibleParenthesis(3, result);

    ASSERT_TRUE(result.size() == 5);
    ASSERT_TRUE((result == std::list<std::string>{"{{{}}}", "{{}{}}", "{{}}{}", "{}{{}}", "{}{}{}"}));

}

// and more
