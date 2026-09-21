#include <iostream>
int main()
{
	double eastCoastsales = 8.6;
	double percentage = 0.58;
	double totalSales = eastCoastsales / percentage;
	std::cout << " the predicted total sales are $"
	<< totalSales
		<< "million." << std::endl;
	return 0;
}