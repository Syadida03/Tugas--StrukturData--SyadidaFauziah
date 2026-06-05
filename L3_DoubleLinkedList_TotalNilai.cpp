//Circular
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev; 
};

int main() {
    Node *node1 = new Node;
    Node *node2 = new Node;
    Node *node3 = new Node;
    
    node1->data = 10;
    node1->next = node2;
    node1->prev = node3; 
    
    node2->data = 20;
    node2->next = node3;
    node2->prev = node1;
    
    node3->data = 30;
    node3->next = node1;
    node3->prev = node2;
    
    int i = 1;
    int totalNilai = 0;
    Node *temp = node1;
    
    cout << "Traversal Forward" << endl;
    while (true) {
        cout << "Data ke " << i << ": " << temp->data << endl;
        totalNilai += temp->data;
        
        temp = temp->next;
        i++;
        
        if (temp == node1) break;
    }
    
    cout << "Total Nilai: " << totalNilai << endl << endl;

    cout << "Traversal Backward" << endl;
    temp = node1->prev; 
    do {
        cout << "Data: " << temp->data << endl;
        temp = temp->prev;
    } while (temp != node1->prev); 

    return 0;
}



//#include<iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node *next;
//    Node *prev; 
//};
//
//int main() {
//    Node *node1 = new Node;
//    Node *node2 = new Node;
//    Node *node3 = new Node;
//    Node *node4 = new Node;
//    Node *node5 = new Node;
//    
//    node1->data = 10;
//    node1->next = node2;
//    node1->prev = NULL;
//    
//    node2->data = 20;
//    node2->next = node3;
//    node2->prev = node1;
//    
//    node3->data = 30;
//    node3->next = node4;
//    node3->prev = node2;
//    
//    node4->data = 40;
//    node4->next = node5;
//    node4->prev = node3; 
//    
//    node5->data = 50;
//    node5->next = NULL;
//    node5->prev = node4;
//    
//    int i = 1;
//    int totalNilai = 0;
//    Node *temp = node1;
//    
//    cout << "Traversal Forward" << endl;
//    while (temp != NULL) {
//        cout << "Data ke " << i << ": " << temp->data << endl;
//        totalNilai = totalNilai + temp->data;
//        if (temp->next == NULL) {
//            break; 
//        }
//        temp = temp->next;
//        i++;
//    }
//    
//    cout << "Total Nilai: " << totalNilai << endl << endl;
//
//    cout << "Traversal Backward" << endl;
//    while (temp != NULL) {
//        cout << "Data: " << temp->data << endl;
//        temp = temp->prev;
//    }
//
//    return 0;
//}
