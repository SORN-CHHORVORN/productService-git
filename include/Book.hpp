#pragma once
#include <string>
class Book{
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool isAvailable;
public:
    Book();
    Book(const std::string &title, const std::string &author, const std::string &isbn, bool isAvailable);

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getIsbn() const;
    bool getIsAvailable() const;
    
    void setTitle(const std::string &title);
    void setAuthor(const std::string &author);
    void setIsbn(const std::string &isbn);
    void setIsAvailable(bool isAvailable);
};