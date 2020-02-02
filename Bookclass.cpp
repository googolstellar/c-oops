#include<iostream>
using namespace std;
class book{
    string bookName;
    int bookNo;
    float price;
    public:
        void getData(){
            cout << "Enter book name: ";
            getline(cin, bookName);
            cout << "Enter book number: ";
            cin >> bookNo;
            cout << "Enter price of the book: ";
            cin >> price;
        }
        void displayData();
};

void book::displayData(){
    cout << "book name: "<< bookName;
    cout << "\nbook no: " << bookNo;
    cout << "\nbook price: "<< price;
};

int main(){
    book b;
    cout << "Enter details of the book:\n";
    b.getData();
    cout <<"\nThe details of entered book is: \n";
    b.displayData();
    cout << "\n";
    return 0;
}