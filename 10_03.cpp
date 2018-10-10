/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * this program will output the names and prices of store items
 * and calculate the total cost of the named items.
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// conky - to list system and cpu on desktop

#include <iostream>
#include <iomanip>

int main()
{
    std::string  item1,
   item2,
   item3,
   item4;
    double price1, price2, price3, price4, total;
    
    std::cout << "Enter the name of an item: ";
    std::getline(std::cin, item1);
    std::cout << "Enter the price of " << item1 << ": ";
    std::cin >> price1;
    total = price1;

    std::cout << "Enter the name of another item: ";
    std::cin.ignore();
    std::getline(std::cin, item2);
    std::cout << "Enter the price of " << item2 << ": ";
    std::cin >> price2;
    total += price2;

    std::cout << "Enter the name of another item: ";
    std::cin.ignore();
    std::getline(std::cin, item3);
    std::cout << "Enter the price of " << item3 <<": ";
    std::cin >> price3;
    total += price3;

    std::cout << "Enter the name of another item: ";
    std::cin.ignore();
    std::getline(std::cin,item4);
    std::cout << "Enter the price of " << item4 << ": ";
    std::cin >> price4;
    total += price4;

    std::string bar = "---------------------------------------";

    std::cout <<"Store Program \n";
    std::cout << std::left << std::setw(16) << "Item";
std::cout << std::left << std::setw(16) << "Amount"
     << std::endl;

std::cout << bar << std::endl;

std::cout << std::left << std::setw(16) << item1;
std::cout << std::left << std::setw(16) << std::fixed
     << std::setprecision(2) << price1 << std::endl;

    std::cout << std::left << std::setw(16) << item2;
std::cout << std::left << std::setw(16) << std::fixed
     << std::setprecision(2) << price2 << std::endl;

    std::cout << std::left << std::setw(16) << item3;
std::cout << std::left << std::setw(16) << std::fixed
     << std::setprecision(2) << price3 << std::endl;

    std::cout << std::left << std::setw(16) << item4;
std::cout << std::left << std::setw(16) << std::fixed
     << std::setprecision(2) << price4 << std::endl;
    std::cout << bar <<std::endl;

    std::cout << std::left <<std::setw(16) <<" ";
    std::cout << std::left << std::setw(16) <<"Total: "
            << total <<std::endl;

    return 0;
}
