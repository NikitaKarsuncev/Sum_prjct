#include <iostream>
int main(){
	unsigned int number;
	std::cout<<"input your number: \n";
	std::cin>>number;
	
	unsigned int sum=0;
	unsigned int prod=1u;

	do{
		sum += number%10;
		prod *= number%10;
		number /= 10;

	} while(number!=0);
	std::cout << sum << ", " << prod << std::endl;
	return 0;
}
