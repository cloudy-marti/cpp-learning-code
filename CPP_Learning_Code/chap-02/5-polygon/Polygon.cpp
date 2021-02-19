#include "Polygon.h"
#include "realloc.h"

void Polygon::add_vertex(int x, int y)
{
    _vertices = realloc(_vertices, _size, _size+1);
    _vertices[_size] = Vertex { x, y };
    _size++;
}

Polygon::~Polygon()
{
    delete[] _vertices;
}

const Vertex Polygon::get_vertex(size_t pos) const
{
    if(pos >= _size)
    {
        throw std::invalid_argument("position given must be between 0 and size-1");
    }
    return _vertices[pos];
}

// std::ostream& operator<<(std::ostream& stream, const Polygon& polygon)
// {
//     const Vertex* vertices = polygon.get_vertices();
//     for (size_t i = 0; i < polygon.get_size(); ++i)
//     {
//         stream << "(" << vertices[i].first << ", " << vertices[i].second << ") ";
//     }
//     return stream;
// }

std::ostream& operator<<(std::ostream& stream, const Polygon& polygon)
{
    for (size_t i = 0; i < polygon._size; ++i)
    {
        stream << polygon._vertices[i];
    }
    return stream;
}

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    return stream << "(" << vertex.first << ", " << vertex.second << ") ";
}