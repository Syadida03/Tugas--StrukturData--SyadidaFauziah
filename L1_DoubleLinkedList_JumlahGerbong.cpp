#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};

int main(){
	Node *node1 = NULL;
	Node *node2 = NULL;
	Node *node3 = NULL;
	
	node1 = new Node;
	node2 = new Node;
	node3 = new Node;
	
	node1->data = 10;
	node1->next = node2;
	node1->prev = node3;
	
	node2->data = 20;
	node2->next = node3;
	node2->prev = node1;
	
	node3->data = 30;
	node3->next = node1;
	node3->prev = node2;
	
	int jumlahData = 0;
	
	Node *nodeSekarang = node1;
	int i = 1;
	
	cout << "Traversal Forward" << endl;
	while(nodeSekarang != NULL){
		cout << "Data ke " << i++ << ": " << nodeSekarang->data;
		jumlahData++;
		nodeSekarang = nodeSekarang->next;
		cout << endl;
		if(nodeSekarang == node1)
		break;
	}
	
	cout << "\nJumlah Gerbong: " << jumlahData << endl;
	
	cout << "\nTraversal Backward" << endl;
	nodeSekarang = node3;
	i = 1;
	
	while(nodeSekarang != NULL){
		cout << "Data ke " << i++ << ": " << nodeSekarang->data;
		nodeSekarang = nodeSekarang->prev;
		cout << endl;
		if(nodeSekarang == node3){
			break;
		}
	}
	return 0;
}


////NULL <- [10] <-> [20] <-> [30] -> NULL
//#include<iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    struct Node *next; 
//    struct Node *prev; 
//};
//
//int main() {
//    Node *node1 = NULL;
//    Node *node2 = NULL;
//    Node *node3 = NULL;
//    
//    node1 = new Node;
//    node2 = new Node;
//    node3 = new Node;
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
//    // Traversal Forward
//    cout << "Traversal Maju:" << endl;
//   
//    int jumlahData = 0;
//    Node *temp = node1;
//    
//    while (temp != NULL) {
//        cout << "Data : " << temp->data << endl;
//        jumlahData++;
//        if (temp->next == NULL) break; 
//        temp = temp->next;
//    }
//    cout << "Jumlah Data: " << jumlahData << endl;
//
//    // Traversal Backward
//    cout << "\nTraversal Mundur:" << endl;
//    while (temp != NULL) {
//        cout << "Data : " << temp->data << endl;
//        temp = temp->prev; 
//    }
//
//    return 0;
//}
