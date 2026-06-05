#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

Node *head = NULL;

void traverse();
void inputData();
void tambahDataTail();

int main() {
    inputData();      
    cout << endl;
    tambahDataTail(); 
    
    cout << "\nData setelah penambahan di akhir:" << endl;
    traverse();      

    cin.ignore();
    return 0;
}

void inputData() {
    Node *tail = NULL;
    int n, nilai;
    cout << "Masukkan jumlah data awal: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << "Masukkan data ke " << i << ": ";
        cin >> nilai;
        Node *nodeBaru = new Node;
        nodeBaru->data = nilai;
        nodeBaru->next = NULL;
        
        if(head == NULL) {
            head = nodeBaru;
            tail = nodeBaru;
        } else {
            tail->next = nodeBaru;
            tail = nodeBaru;
        }
    }
}

void tambahDataTail() {
    int nilai;
    cout << "Masukkan data yang ditambahkan di akhir: ";
    cin >> nilai;
    Node *nodeBaru = new Node;
    nodeBaru->data = nilai;
    nodeBaru->next = NULL;
    
    if (head == NULL) {
        head = nodeBaru;
    } else {
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
       temp->next = nodeBaru;
    }
}

void traverse() {
    Node *temp = head; 
    while (temp != NULL) {
        cout << "[" << temp->data << "]";
        if(temp->next != NULL) cout << "->";
        temp = temp->next;
    }
    cout << "-> NULL" <<endl;
}
