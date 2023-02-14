#include <iostream>
#include <vector>


std::vector<int> getEvenNums( const std::vector<int>& nums ) {
	std::vector<int> evenNumbers {};
	for ( auto i = 0; i < nums.size(); i++ ) {
		if ( nums[ i ] % 2 == 0 ) {
			evenNumbers.push_back( nums[ i ] );
		}
	}

	for ( auto j = 0; j < evenNumbers.size(); j++ ) {
		std::cout << evenNumbers[ j ] << " ";
	}

	return evenNumbers;
}

int main( int argc, char* arv[] ) {

	std::vector<int> numbers { 1, 0, 2, 4, 6, 8 };

	std::cout << "Original vector: " << " \n";
	for ( auto i : numbers ) {
		std::cout << i << " ";
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Modified vector with even numbers only: " << " \n";
	getEvenNums( numbers );

	std::cout << std::endl;

}