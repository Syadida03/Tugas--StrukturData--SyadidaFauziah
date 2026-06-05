//Circular
#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
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

    int nilaiTerbesar = 0;
    Node *nodeSekarang = node1;
    int i = 1;

    cout << "Traversal Forward" << endl;
    while (true) {
        cout << "Data ke " << i << ": " << nodeSekarang->data << endl;
        
        if (nodeSekarang->data > nilaiTerbesar) {
            nilaiTerbesar = nodeSekarang->data;
        }
        nodeSekarang = nodeSekarang->next;
        i++;
        if (nodeSekarang == node1) break;
    }
    
    cout << "Nilai Terbesar: " << nilaiTerbesar << endl << endl;

    cout << "Traversal Backward" << endl;
    nodeSekarang = node3; 
    int j = 1;
    while (true) {
        cout << "Data ke " << j << ": " << nodeSekarang->data << endl;
        
        nodeSekarang = nodeSekarang->prev;
        j++;
        if (nodeSekarang == node3) break;
    }

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
//    node3->next = NULL;
//    node3->prev = node2;
//    
//    
//    int i = 1;
//    int nilaiTerbesar = 0;
//    Node *temp = node1;
//    
//    cout << "Traversal Forward" << endl;
//    while (temp != NULL) {
//        cout << "Data ke " << i << ": " << temp->data << endl;
//        
//        if(temp->data > nilaiTerbesar) {
//            nilaiTerbesar = temp->data;
//        }
//        if (temp->next == NULL) break; 
//        temp = temp->next;
//        i++;
//    }
//    
//    cout << "Nilai Terbesar: " << nilaiTerbesar << endl << endl;
//
//    cout << "Traversal Backward" << endl;
//    while (temp != NULL) {
//        cout << "Data: " << temp->data << endl;
//        temp = temp->prev; 
//    }
//
//    return 0;
//}
