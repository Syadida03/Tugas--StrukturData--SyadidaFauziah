#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

Node *head = NULL;

void traverse();
void inputData();
void tambahDataHead();

int main() {
    inputData();      
    cout << endl;
    tambahDataHead(); 
    
    cout << "\nData setelah penambahan di awal:" << endl;
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

void tambahDataHead() {
    int nilai;
    cout << "Masukkan data yang ditambahkan di awal: ";
    cin >> nilai;
    Node *nodeBaru = new Node;
    nodeBaru->data = nilai;
    nodeBaru->next = head; // Menyambungkan ke head lama
    head = nodeBaru;       // Menjadi head baru
}

void traverse() {
    Node *temp = head; 
    int i = 1;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
        i++;
    }
    cout << "NULL" <<endl;
}
