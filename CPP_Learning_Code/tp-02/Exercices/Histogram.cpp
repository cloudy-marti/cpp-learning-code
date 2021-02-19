#include <iostream>

class Histogram
{
public:
	Histogram();				  // constructeur
	Histogram(const Histogram &); // constructeur de copie
	~Histogram();				  // destructeur

	Histogram &operator=(const Histogram &); // opérateur d'assignation par copie

	void analyze(const std::string &); // analyse la string passée en paramètre
	void print() const;				   // affiche l'histogramme

private:
	unsigned *_count; // tableau contenant le nombre d'occurrences de chaque lettre entre 'a' et 'z'
};

Histogram::Histogram() : _count{new unsigned[26]{}}
{
	std::cout << "Default constructing the histogram: " << this << std::endl;
}

Histogram::Histogram(const Histogram &other) : _count{new unsigned[26]{}}
{
	std::cout << "Cloning the histogram " << this << std::endl;
	for (int i = 0; i < 26; ++i) // ++i renvoie une référence alors que i++ créé une copie
	{
		_count[i] = other._count[i];
	}
}

Histogram::~Histogram()
{
	std::cout << "Destructing the histogram " << this << std::endl;
	delete[] _count;
};

Histogram &Histogram::operator=(const Histogram &other)
{
	_count = other._count;
	return *this;
}

void Histogram::analyze(const std::string &str)
{
	for (char c : str)
	{
		if (c >= 97 && c <= 122)
		{
			_count[c-97]++;
		}
	}
}

void Histogram::print() const
{
	std::cout << "[ ";
	for (int i = 0; i < 26; ++i)
	{
		std::cout << _count[i] << ", ";
	}
	std::cout << " ]" << std::endl;
}

int main()
{
	Histogram h;
	std::string input;

	std::cin >> input;
	h.analyze(input);
	h.print();

	Histogram h2 {h};
	h.print();

	std::cout << "Getting to the end of scope, destructors should be called after this message" << std::endl;
	return 0;
}

// Histogram clone {h};
// Histogram h1,h2;
// Histogram h3{Histogram{h1}};