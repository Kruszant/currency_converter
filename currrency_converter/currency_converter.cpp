#include <iostream>
#include <map>
#include <vector>


int main() {

    std::string source, target;

    //zrobic to na case


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
    int select;

    std::cout << "Select the currency you want to exchange your money from and to " << std::endl;
    std::cout << "from: " << std::endl;
    std::cout << "" << std::endl;
    
    std::vector<std::string> order = {"USD", "EUR", "GBP", "JPY", "AUD", "CAD", "CHF", "CNY", "PLN"};

    int i = 1;

    for (const std::string& currency : order) {             //wszystkie zmiany string& currency beda tez zmieniac string currency ale bedzie zabierało mniej miejsca (copia)
        std::cout << i << ". " << currency << std::endl;       //wypisanie wszystkich walut
        i++;
    }
    std::cin >> select;

    switch (select) {
        case 1:
            source = "USD";
            break;
        case 2:
            source = "EUR";
            break;
        case 3:
            source = "GBP";
            break;
        case 4:
            source = "JPY";
            break;
        case 5:
            source = "AUD";
            break;
        case 6:
            source = "CAD";
            break;
        case 7:
            source = "CHF";
            break;
        case 8:
            source = "CNY";
            break;
        case 9:
            source = "PLN";
            break;
        default:
            std::cout << "no matching currency";
            return 1;
    }

    std::cout << "" << std::endl;
    std::cout << "to: " << std::endl;

    i = 1;

    for (const std::string& currency : order) {
        std::cout << i << ". " << currency << std::endl;
        i++;
    }

    std::cin >> select;

        switch (select) {
        case 1:
            target = "USD";
            break;
        case 2:
            target = "EUR";
            break;
        case 3:
            target = "GBP";
            break;
        case 4:
            target = "JPY";
            break;
        case 5:
            target = "AUD";
            break;
        case 6:
            target = "CAD";
            break;
        case 7:
            target = "CHF";
            break;
        case 8:
            target = "CNY";
            break;
        case 9:
            target = "PLN";
            break;
        default:
            std::cout << "no matching currency";
            return 1;
    }

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
    std::cout << "" << std::endl;
    std::cout << number << source << " = " << result << target << std::endl;


    system("pause");            // nie zamykanie sie okienka po ostatnim cin
    return 0;
}