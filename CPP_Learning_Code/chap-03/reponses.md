
### Mission de recherche
1. Quelle est la complexité d’insertion dans une std::map ?

L'insertion a une complexité logarithmique.

2. Quelles différences y a-t-il entre les fonctions push_back() et emplace_back() de la classe std::vector ?

Push back va insérer un élément déjà construit tandis que emplace_back va rajouter un élément construit de novo. Les deux à la fin.

3. Quelle fonction permet de savoir si un conteneur est vide ?

empty

4. Quelle est la différence entre std::vector::size() et std::vector::capacity() ?

size() va donner le nombre d'éléments présents dans le vecteur tandis que capacity() va donner le nombre d'éléments qu'on peut rajouter dedans avant de devoir faire une réallocation.

5. A quoi sert la classe std::stack ?

stack est un conteneur qui fonctionne comme une pile (Last in, last out).

6. Quelle fonction permet de retirer le dernier élément d’un objet de type std::queue ?

Il n'y a pas de fonctions qui permet cela.
