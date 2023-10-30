#include <iostream>
#include <map>


int main() {

    std::string source, target;
 

    std::map<std::string, double> exchangeRates = {         //mapa dostępnych walut
    {"USD", 1.0},
    {"EUR", 0.94},   
    {"GBP", 0.82},   
    {"JPY", 149.0},  
    {"AUD", 1.57},    
    {"CAD", 1.38},   
    {"CHF", 0.90},   
    {"CNY", 7.3},   
    {"PLN", 4.2},    
};

    double number;

    std::cout << "Select the currency you want to exchange your money from and to " << std::endl;
    std::cout << "from: " << std::endl;
    std::cin >> source;
    std::cout << "to: " << std::endl;
    std::cin >> target;
    std::cout << "How much " << source << " do you want to exchange?" << std::endl;
    std::cin >> number;


    for(char &c : source){          //zamienianie liter na wielkie litery
        c = std::toupper(c);
    }

    for(char &c : target){
        c = std::toupper(c);
    }


    double rate = exchangeRates[target] / exchangeRates[source];
    double result = rate * number;

    std::cout << "Converting money from " << source << " to " << target << "..." << std::endl;
    std::cout << number << source << " = " << result << target << std::endl;


    system("pause");            // nie zamykanie sie okienka po ostatnim cin
    return 0;
}