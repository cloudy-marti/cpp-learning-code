#include <iostream>

#include "Polygon.h"

// Polygon truc()
// {
//     Polygon polygon;
//     Polygon& ref = polygon;
//     // Polygon* ptr = &polygon;
//     // delete ptr;
//     // delete &ref;
//     //
//     //
//     //
//     return ref;
// }

int main()
{
    Polygon polygon;

    polygon.add_vertex(2, 3);
    polygon.add_vertex(4, 5);
    polygon.add_vertex(6, 7);
    std::cout << polygon << std::endl;

    const auto& vertex = polygon.get_vertex(1);
    std::cout << vertex << std::endl; // -> (4,5)

    polygon.add_vertex(8, 9);

    const auto& vertex1 = polygon.get_vertex(3);
    
    // std::cout << "(" << vertex.first << "," << vertex.second << ")" << std::endl; //-> ???
    std::cout << vertex1 << std::endl; // -> ???

    return 0;
}
