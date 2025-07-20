#pragma once

#include "Book.hpp"
#include <vector>
class Library {
private:
    std::vector<Book> books;
public:
    void addBook(const Book &book);
    void displayBook() const;
    void searchBook(const std::string &title) const;
    void borrowBook(const std::string &isbn);
    void returnBook(const std::string &isbn);
};
