#include<bits/stdc++.h>
using namespace std;

class Book{

    private:
    string name;
    string id;
    string isbn;
    string title, author;

    public:
    Book(string name, string title, string author, string isbn){
        this->name = name;
        this->title = title;
        this->author = author;
        this->isbn = isbn;
    }

    string getTitle(){
        return this->title;
    }

    string getName(){
        return this->name;
    }

    string getAuthor(){
        return this->author;
    }

    string getISBN(){
        return this->isbn;
    }
};

class Library{
    private:
    vector<Book*> books;
    Book *nullBook = new Book("null", "null", "null", "null");

    public:

    // return Book* so that null values can be handled efficintly
    Book* getBookByTitle(string titleOfBook){

        for(auto i : books){
            if( i->getTitle() == titleOfBook ){ return i; }// passing by address }
        }
        cout<<"Book Not Found"<<endl;
        return nullBook;

    }

    Book* getBookByAuthor(string authorOfBook){

        for(auto i : books){
            if( i->getAuthor() == authorOfBook ){ return i;} // passing by address}
        }
        cout<<"Book Not Found"<<endl;
        return nullBook;
        
    }

    Book* getBookByName(string nameOfBook){

        for(auto i : books){
            if( i->getName() == nameOfBook ){ return i; }// passing by address}
        }
        cout<<"Book Not Found"<<endl;
        return nullBook;
        
    }

    Book* getBookByISBN(string isbnOfBook){

        for(auto i : books){
            if( i->getISBN() == isbnOfBook ){ return i; }// passing by address
        }
        cout<<"Book Not Found"<<endl;
        return nullBook;
        
    }

    void addBook(Book *book ){
        books.push_back(book);
    }

};

int main(){

    Book *book1 = new Book("name1", "title1", "author1", "isbn1");
    Book *book2 = new Book("name2", "title2", "author2", "isbn2");

    Library *library = new Library();
    library->addBook(book1);
    library->addBook(book2);

    Book *searchBook = library->getBookByAuthor("author3");
    cout<<searchBook->getAuthor()<<endl; 

    return 0;


}