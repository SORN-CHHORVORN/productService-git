#include <iostream>
#include "Product.hpp"
#include "ProductService.hpp"

using namespace std;

void menu() {
    cout << "1. Add" << endl;
    cout << "2. Get all" << endl;
    cout << "3. Get by id" << endl;
    cout << "4. Delete by id" << endl;
    cout << "5. Update by id" << endl;
    cout << "0. Exit" << endl;
}

ProductService productService;

int main() {
    system("cls");
    
    int op;
    do {
        menu();
        cout << "Enter an option -> ";
        cin >> op;

        if (op == 0) {
            cout << "Exiting..." << endl;
            return 0;
        }

        switch(op) {
            case 1: {
                system("cls");
                int id, qty;
                string name;
                double price;
                cout << "Please input id: "; cin >> id;
                if (productService.existsById(id)) {
                    cout << "Product with id: " << id << " already exists" << endl;
                    break;
                }
                cout << "Please input name: "; cin >> name;
                cout << "Please input price: "; cin >> price;
                cout << "Please inputqty: "; cin >> qty;

                Product p(id, name, price, qty);
                productService.addProduct(p);
                break;
            }
            case 2: {
                system("cls");
                productService.getAllProducts();
                break;
            }
            case 3: {
                system("cls");
                int id;
                cout << "Please input id: ";
                cin >> id;
                productService.getProductById(id);
                break;
            }
            case 4: {
                system("cls");
                int id;
                cout << "Please input product id to delete:"; 
                cin >> id;
                if (!productService.existsById(id)) {
                    cout << "Product with id: " << id << " does not exist" << endl;
                    break;
                }
                productService.deleteProductById(id);
                break;
            }
            case 5: {
                system("cls");
                int id;
                cout << "Please input product id to update:"; 
                cin >> id;
                if (!productService.existsById(id)) {
                    cout << "Product with id: " << id << " does not exist" << endl;
                    break;
                }
                string name;
                double price;
                int qty;
                cout << "Please input new name: "; cin >> name;
                cout << "Please input new price: "; cin >> price;
                cout << "Please input new qty: "; cin >> qty;
                productService.updateProductById(id, name, price, qty); 
                break;
            }
            default: 
                cout << "Invalid option!" << endl;
        }

    } while(op != 0);

    return 0;
}
