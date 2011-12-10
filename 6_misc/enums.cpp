#include <iostream>

using namespace std;

class Material {
public:
	enum MaterialType { wood = 4, glass, steel = -1, concrete=-2 };
	Material();
	~Material();	
};

int main() {
	Material::MaterialType mat1;
	Material::MaterialType mat2;

	int value;
	mat1 = Material::wood;
	mat2 = Material::steel;
	mat1 = mat2;
	mat2 = (Material::MaterialType)(Material::steel + Material::concrete);
	value = mat1;
	value = Material::g;
	std::cout << value << endl;
	return 0;
}