#include <iostream>
#include <string>
#include <sstream>

int main(){
	/*int i;
	std::cin >> i;
	std::cout << i << std::endl;*/
    
    std::string line;
    getline(std::cin, line);
	std::cout <<line;

	int value = 0;
	
	std::stringstream sstream;
	sstream << value;
	sstream >> line;
	
	std::cout << line;
	
	return 0;
}