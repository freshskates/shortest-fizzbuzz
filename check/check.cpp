#include <iostream>
int main(){
	int n; 
	std::cout<<"Enter n: ";std::cin>>n;std::cin.ignore(1000,10);
	for (int i=0;i<=n;i++)
		printf((i%3==0?(i%5==0?"FizzBuzz\n":"Buzz\n"):(i%5==0?"Fizz\n":"%d\n")),i);
}

