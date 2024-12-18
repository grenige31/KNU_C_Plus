#include <iostream>
using namespace std;

class Book {

    string title, author;
public:
    void setDetails(string t, string a) {
        title = t;
        author = a;
    }
    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

class EBook : public Book {

    double fileSize; // ���� ũ�� (MB)
    string format;   // ���� ����
public:
    void setEBookDetails(double size, string f) {
        fileSize = size;
        format = f;
    }
    void displayEBook() {
        display();
        cout << "File Size: " << fileSize << "MB, Format: " << format << endl;
    }
};

int main() {
    EBook ebook;
    ebook.setDetails("C++ Programming", "Tom");
    ebook.setEBookDetails(5.4, "PDF");
    ebook.displayEBook();
    return 0;
}
