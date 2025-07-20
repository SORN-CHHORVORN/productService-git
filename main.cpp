#include "Library.hpp"
#include <iostream>
#include <iomanip>
void showMenu()
{
    std::cout << "=======================================" << std::endl;
    std::cout << "=====| Library Management System |=====" << std::endl;
    std::cout << "=====| 1. Add     Book           |=====" << std::endl;
    std::cout << "=====| 2. Display Book           |=====" << std::endl;
    std::cout << "=====| 3. Search  Book           |=====" << std::endl;
    std::cout << "=====| 4. Borrow  Book           |=====" << std::endl;
    std::cout << "=====| 5. Return  Book           |=====" << std::endl;
    std::cout << "=====| 6. Exit                   |=====" << std::endl;
    std::cout << "=======================================" << std::endl;
}
int main(){
    Library library;
    int choice;
    do {
        showMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {

            case 1: {
                system("cls");
                std::cout << "========| Add Book |========" << std::endl;
                std::string title, author, isbn;
                bool isAvailable;
                std::cout << "Enter book title: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                std::cout << "Enter book author: ";
                std::getline(std::cin, author);
                std::cout << "Enter book ISBN: ";
                std::getline(std::cin, isbn);
                std::cout << "Is the book available? (1 for Yes, 0 for No): ";
                std::cin >> isAvailable;
                library.addBook(Book(title, author, isbn, isAvailable));
                break;
            }
            case 2:
                std::cout << "========| Display Books |========" << std::endl;
                library.displayBook();
                break;
            case 3: {
                system("cls");
                std::cout << "========| Search Book |========" << std::endl;
                std::string title;
                std::cout << "Enter book title to search: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                library.searchBook(title);
                break;
            }
            case 4: {
                system("cls");
                std::cout << "========| Borrow Book |========" << std::endl;
                std::string isbn;
                std::cout << "Enter book ISBN to borrow: ";
                std::cin >> isbn;
                library.borrowBook(isbn);
                break;
            }
            case 5: {
                system("cls");
                std::cout << "========| Return Book |========" << std::endl;
                std::string isbn;
                std::cout << "Enter book ISBN to return: ";
                std::cin >> isbn;
                library.returnBook(isbn);
                break;
            }
            case 6:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 6);

    return 0;
}