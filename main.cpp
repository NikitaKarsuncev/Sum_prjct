#include <iostream>
int main(int argc, char* argv[]){
        unsigned int sum=0;
        unsigned int prod=1u;
	if (argc > 1){
		char* number = argv[1];
		int index = 0;
		
		while ( number[index] != '\0' && index < 11){
			if(number[index] >= '0' && number[index]<='9'){
				sum += number[index] - '0';
				prod *= number[index] - '0';
			}else{
				std::cout << "wrong number" << argv[1] << "'" <<std::endl;}
			return 1;
			++index;
		}
	
	}
	unsigned int number;
	std::cout<<"input your number: \n";
	std::cin>>number;

	do{
		sum += number%10;
		prod *= number%10;
		number /= 10;

	} while(number!=0);
	std::cout << sum << ", " << prod << std::endl;
	return 0;
}
