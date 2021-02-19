#include <cstddef>
#include <utility>
#include <ostream>

#pragma once

using Vertex = std::pair<int, int>;

class Polygon
{
    friend std::ostream& operator<<(std::ostream& stream, const Polygon& polygon);

    private:
        size_t _size       = 0u;
        Vertex* _vertices  = nullptr;

    public:
        // inline const Vertex* get_vertices() const { return _vertices; }
        // inline size_t get_size() const { return _size; }
        const Vertex get_vertex(size_t pos) const;
        void add_vertex(int x, int y);
        ~Polygon();
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex);

// std::ostream& operator<<(std::ostream& stream, const Polygon& polygon);