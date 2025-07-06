
 /**
 * @file stack.cpp
 * @mainpage Dokumentasi Project Stack Linked List
 * 
 * @section Deskripsi 
 * Program ini merupakan implementasi struktur data stack (tumpukan).
 * Mendukung operasi dasar seperti:
 * - push
 * - pop
 * - Display
 *
 * @section Cara penggunaan
 * 1. push
 * 2. pop
 * 3. Display
 * 4. Exit
 *
 */
/**
 * @file stack.cpp
 * @author Nurul Najat Mony
 * @brief ini adalah program stack menggunakan linked list
 * @version 0.1
 * @date 2025-06-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;


// Node class representing a single node in the linked list
/**
 * 
 * @class Node 
 * @brief Class Node untuk menyimpan data dan alamat memori.
 * 
 */
class node {
public:
    int data; ///< variabel data dengan tipe integer
    node *next; ///< variabel untuk menyimpan alamat memori

    /**
     * @class node
     * @brief Class node untuk menyimpan data dan pointer ke node berikutnya.
     * 
     * 
     */

   node() { // Ganti "Node" menjadi "node"
        next = NULL; 
    }
};

// Stack class
/**
 * @brief menambahkan class stack
 * 
 */
class Stack {
private:
    node *top; ///< Pointer to the top node of the stack

public:
    Stack() {
        top = NULL; // Initialize the stack with a null top pointer
    }

    // Push operation: Insert an element onto the top of the stack
    /**
     * @brief menambahkan sebuah elemen ke bagian atas stack.
     * 
     * @param value 
     * @return int 
     */
    int push(int value) {
        node *newNode = new node(); ///< 1.Allocate memory for the new node
        newNode->data = value;      ///< 2.assign value
        newNode->next = top;        ///< 3.sent the next pointer of the new node to the current top node 
        top = newNode;              ///< 4.update the top pointer to the new node
    
     cout << "Pushed value: " << value << endl;
        return value;
    }

    // IsEmpty operation: Check if the stack is empty
    /**
     * @brief Memeriksa apakah stack kosong.
     * 
     * @return true jika stack kosong.
     * @return false jika stack tidak kosong.
     */
    bool isEmpty() {
        return top == NULL;
    }

    // Pop operation: Remove the topmost element from the stack
    /**
     * @brief Menghapus elemen paling atas dari stack dan menampilkannya.
     * 
     * 
     */
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Popped value: " << top->data << endl;
        node *temp = top;
        top = top->next;
        delete temp;
    }

    // Peek operation: Retrieve all elements from the top to bottom
    /**
     * @brief Menampilkan semua elemen stack dari top ke bawah.
     * 
     */
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            node *current = top;
  
          cout << "Stack contents (top to bottom):" << endl;
            while (current != NULL) {
                cout << current->data << endl;
                current = current->next;
            }
        }
    }
};

int main() {
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4) {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter the value to push: ";
        cin >> value;
        stack.push(value);
        break;
    case 2:
        stack.pop();
        break;
    case 3:
        stack.peek();
        break;
    case 4:
        cout << "Exiting program." << endl;
        break;
    default:
        cout << "Invalid choice. Try again." << endl;
        break;
    }

        cout << endl;
    }

    return 0;
}


 


 

 

