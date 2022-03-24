#include <iostream>

int main() {
	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			(x ^ y) & 1 == = 0 ? {
				std::cout << " #";
			} : {
				std::cout << "  ";
			}
		}
		std::cout << std::endl;
	}
}