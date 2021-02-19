#include <iostream>
#include <string_view>

void print_in_console(const std::string_view str)
{
    std::cout << str << std::endl;
}

int main()
{
    print_in_console("print me");
    return 0;
}

/**
 * la concaténation,
 *      operator+=,+
 * l’extration de sous-chaîne,
 *      substr
 * la recherche de caractère ou de sous-chaîne,
 *      find
 * la comparaison,
 *      compare // operator==,!=,<,>,<=,>=,<=>
 * le remplacement d’une partie de la chaîne.
 *      replace
 */