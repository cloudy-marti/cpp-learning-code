add_compile_options(-std=c++17)

add_executable(tp4-phonecalls
    PhoneCalls/Main.cpp
    PhoneCalls/Person.h
    PhoneCalls/Phone.h
    PhoneCalls/HomePhone.h
    PhoneCalls/HomePhone.cpp
    PhoneCalls/MobilePhone.h
)

add_executable(tp4-shapes
    Shapes/main.cpp
    Shapes/circle.hpp
    Shapes/line_seg.hpp
    Shapes/line.hpp
    Shapes/point.hpp
    Shapes/rectangle.hpp
    Shapes/shape.hpp
)
