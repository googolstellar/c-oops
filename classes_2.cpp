#include<iostream>
#include<stdio.h>
using namespace std;
class book{
    string bookName;
    string bookAuthor;
    int bookNo;
    float price;
    public:
        void getData(){
            cout << "Enter book name: ";
            getline(cin, bookName);
            cout << "Enter author name: ";
            getline(cin, bookAuthor);
            cout << "Enter book number: ";
            cin >> bookNo;
            cout << "Enter price of the book: ";
            cin >> price;
        }
        void displayData();
};

void book::displayData(){
    cout << "book name: "<< bookName;
    cout << "\nbook author: "<< bookAuthor;
    cout << "\nbook no: " << bookNo;
    cout << "\nbook price: "<< price;
};

int main(){
    book b[100];
    int n;
    // cout << "Enter details of the book:\n";
    // b[0].getData();
    // cout <<"\nThe details of entered book is: \n";
    // b[0].displayData();
    cout << "Enter no. of books to be added: ";
    cin >> n;
    getchar();
    for(int i = 0; i < n; i++){
        cout << "\nEnter details of book " << i+1 << endl;
        b[i].getData();
    }
    cout << "The details of books entered \n";
    for(int i = 0; i < n; i++){
        b[i].displayData();
        cout << "\n______________________________________________";
        cout << "\n";
    }
    cout << "\n";
    return 0;
}