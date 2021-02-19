#include <array>

class PhoneNumber {
    private:
        std::array<int, 5> _phone_number;

    public:
        PhoneNumber(int a, int b, int c, int d, int e);
        bool is_valid() const;
};