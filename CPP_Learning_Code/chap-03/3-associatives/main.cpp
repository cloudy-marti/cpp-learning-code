#include <set>
#include <unordered_set>
#include <iostream>
#include <map>

#include "keys.h"

bool ComparableDog::operator<(const ComparableDog& other) const
{
    if (_name < other._name)
    {
        return true;
    }
    else if (_name > other._name)
    {
        return false;
    }
    else
    {
        return _species < other._species;
    }
}

bool HashableDog::operator==(const HashableDog& other) const
{
    return _name == other._name && _species == other._species;
}

int main()
{
    std::set<ComparableDog> dogs;
    ComparableDog vodka {"vodka", "fox terrier"};
    dogs.insert(vodka);
    ComparableDog pongo {"pongo", "dogue allemand"};
    dogs.insert(pongo);

    std::cout << dogs.size() << std::endl;

    ComparableDog vClone {vodka};
    dogs.insert(vClone);

    std::cout << dogs.size() << std::endl;

    std::unordered_set<HashableDog> hDogs;
    HashableDog ozzy {"ozzy", "pomeranian"};
    hDogs.insert(ozzy);
    hDogs.emplace("flanelle", "labrador");

    using Owner = std::pair<std::string, std::string>;
    std::map<ComparableDog, Owner> owner_by_dog;

    owner_by_dog.emplace(vodka, std::make_pair("emilie", "marti"));
    owner_by_dog.insert({pongo, std::make_pair("emilie", "marti")});

    return 0;
}