class Toto
{
public:
    Toto() : Toto(3)
    {}

    Toto(int v1) : _value1(v1)
    {}

private:
    int _value1;
    int _value2;
};