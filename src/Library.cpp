#include "Library.hpp"
#include <iomanip>
#include <iostream>

void Library::addBook(const Book &book)
{
    books.push_back(book);
}
void Library::displayBook() const
{
    std::cout << std::left
              << std::setw(30) << "Title"
              << std::setw(25) << "Author"
              << std::setw(15) << "ISBN"
              << "IsAvailable" << std::endl;
    for (const auto &book : books)
    {
        std::cout << std::left
                  << std::setw(30) << book.getTitle()
                  << std::setw(25) << book.getAuthor()
                  << std::setw(15) << book.getIsbn()
                  << (book.getIsAvailable() ? "Yes" : "No") << std::endl;
    }
}
void Library::searchBook(const std::string &title) const
{
    bool found = false;
    for (const auto &book : books)
    {
        if (book.getTitle() == title)
        {
            std::cout << "Book found: " << book.getTitle() << " by " << book.getAuthor() << std::endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        std::cout << "Book not found." << std::endl;
    }
}
void Library::borrowBook(const std::string &isbn)
{
    for (auto &book : books)
    {
        if (book.getIsbn() == isbn && book.getIsAvailable())
        {
            book.setIsAvailable(false);
            std::cout << "You have borrowed: " << book.getTitle() << std::endl;
            return;
        }
    }
    std::cout << "Book not available for borrowing." << std::endl;
}
void Library::returnBook(const std::string &isbn)
{
    for (auto &book : books)
    {
        if (book.getIsbn() == isbn && !book.getIsAvailable())
        {
            book.setIsAvailable(true);
            std::cout << "You have returned: " << book.getTitle() << std::endl;
            return;
        }
    }
    std::cout << "Book not found or already available." << std::endl;
}