/**
 * 1. Ecrivez un programme qui utilise `std::cin` pour lire une variable de type `std::string`, puis calcule et affiche pour chaque lettre miniscule ('a', 'b', ..., 'z') le nombre des fois où elle apparaît.\
Le comptage des lettres se fera dans une fonction `count_lower` prenant une chaîne de caractères en paramètre et renvoyant un `std::vector<unsigned int>`. La première case du tableau contiendra le nombre d'occurences de 'a', la seconde de 'b', etc.\
Vous afficherez ce tableau dans une seconde fonction `display_lower_occ`.\
Essayez d'utiliser les signatures qui rendront votre programme le plus efficace possible.

2. Modifiez le programme pour que l'utilisateur puisse entrer plusieurs chaînes de caractères, jusqu'à ce qu'il entre la chaîne vide.\
Vous afficherez en plus des occurrences la concaténation de toutes les chaînes de caractères renseignées par l'utilisateur.
 */

#include <iostream>
#include <vector>

std::vector<unsigned int> count_lower(const std::string& str);
void display_lower_occ(const std::vector<unsigned int>& occurrences);

int main()
{
    std::string input;   
    
    std::cin >> input;
    // >> attend vraiment un mot, du coup il voit pas vraiment les chaines vides
    // utiliser un getline() ---> == "\n" ou != "" (à vérifier)

    std::vector<unsigned int> occurrences = count_lower(input);

    display_lower_occ(occurrences);
}

std::vector<unsigned int> count_lower(const std::string& str)
{
    std::cout << "String: " << str << std::endl;
    std::vector<unsigned int> occurrences(26, 0);
    for(char c : str)
    {
        if(c >= 97 && c <= 122) {
            occurrences[c-97]++;
        }
    }
    return occurrences;
}

void display_lower_occ(const std::vector<unsigned int>& occurrences)
{
    std::cout << "[ ";
    for(unsigned int occ : occurrences) {
        std::cout << occ << ", ";
    }
    std::cout << " ]";
}