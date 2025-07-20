#include "Book.hpp"

Book::Book(){}
Book::Book(const std::string &title, const std::string &author, const std::string &isbn, bool isAvailable)
    : title(title), author(author), isbn(isbn), isAvailable(isAvailable) {}
std::string Book::getTitle() const
{
    return title;
}
std::string Book::getAuthor() const
{
    return author;
}
std::string Book::getIsbn() const
{
    return isbn;
}
bool Book::getIsAvailable() const
{
    return isAvailable;
}

void Book::setTitle(const std::string &title)
{
    this->title = title;
}
void Book::setAuthor(const std::string &author)
{
    this->author = author;
}
void Book::setIsbn(const std::string &isbn)
{
    this->isbn = isbn;
}
void Book::setIsAvailable(bool isAvailable)
{
    this->isAvailable = isAvailable;
}