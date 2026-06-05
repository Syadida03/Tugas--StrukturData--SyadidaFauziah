#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

int main(){
	Node *node1 = NULL;
	Node *node2 = NULL;
	Node *node3 = NULL;
	Node *node4 = NULL;
	Node *node5 = NULL;
	
	node1 = new Node;
	node2 = new Node;
	node3 = new Node;
	node4 = new Node;
	node5 = new Node;
	
	node1->data = 10;
	node1->next = node2;
	
	node2->data = 20;
	node2->next = node3;
	
	node3->data = 30;
	node3->next = node4;
	
	node4->data = 40;
	node4->next = node5;
	
	node5->data = 50;
	node5->next = NULL;
	
	int jumlahData = 0;
	
	Node *temp = node1;
	
	while (temp != NULL){
		cout << "Data " << ": " << temp->data;	
		temp = temp->next;
		cout << endl;
		jumlahData++;
	}
	cout << "Jumlah Data: " << jumlahData <<endl;
	
}
