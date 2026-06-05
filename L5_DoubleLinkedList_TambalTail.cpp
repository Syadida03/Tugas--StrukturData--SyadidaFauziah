//Circular
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
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
        
        if(head == NULL) {
            head = nodeBaru;
            tail = nodeBaru;
            //Node pertama menunjuk ke dirinya sendiri
            head->next = head;
            head->prev = head;
        } else {
            tail->next = nodeBaru;
            nodeBaru->prev = tail;
            
            //Hubungkan node baru ke head
            nodeBaru->next = head;
            head->prev = nodeBaru;
            
            tail = nodeBaru;
        }
    }
}

void tambahDataTail() {
    if (head == NULL) {
        inputData();
        return;
    }

    int nilai;
    cout << "Masukkan data yang ditambahkan di akhir: ";
    cin >> nilai;
    
    Node *nodeBaru = new Node;
    nodeBaru->data = nilai;
    
    Node *tail = head->prev; 
    // Sambungkan tail lama dengan node baru
    tail->next = nodeBaru;
    nodeBaru->prev = tail;
    
    // Sambungkan node baru dengan head
    nodeBaru->next = head;
    head->prev = nodeBaru;
}

void traverse() {
    if (head == NULL) {
        cout << "List Kosong" << endl;
        return;
    }

    Node *temp = head; 
    // Menggunakan do-while karena kondisi awal temp == head
    do {
        cout << temp->data << " <-> ";
        temp = temp->next;
    } while (temp != head); // Berhenti jika kembali ke head
    
    cout << "(Kembali ke Head: " << head->data << ")" << endl;
}



//Linear Double Linked List
//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    struct Node *next;
//    struct Node *prev;
//};
//
//Node *head = NULL;
//
//void traverse();
//void inputData();
//void tambahDataTail();
//
//int main() {
//    inputData();      
//    cout << endl;
//    tambahDataTail(); 
//    
//    cout << "\nData setelah penambahan di akhir:" << endl;
//    traverse();      
//
//    cin.ignore();
//    return 0;
//}
//
//void inputData() {
//    Node *tail = NULL;
//    int n, nilai;
//    cout << "Masukkan jumlah data awal: ";
//    cin >> n;
//    for(int i = 1; i <= n; i++) {
//        cout << "Masukkan data ke " << i << ": ";
//        cin >> nilai;
//        Node *nodeBaru = new Node;
//        nodeBaru->data = nilai;
//        nodeBaru->next = NULL;
//        nodeBaru->prev = NULL; // Inisialisasi prev
//        
//        if(head == NULL) {
//            head = nodeBaru;
//            tail = nodeBaru;
//        } else {
//            tail->next = nodeBaru;
//            nodeBaru->prev = tail; // Sambungkan prev ke node sebelumnya
//            tail = nodeBaru;
//        }
//    }
//}
//
//void tambahDataTail() {
//    int nilai;
//    cout << "Masukkan data yang ditambahkan di akhir: ";
//    cin >> nilai;
//    Node *nodeBaru = new Node;
//    nodeBaru->data = nilai;
//    nodeBaru->next = NULL;
//    nodeBaru->prev = NULL;
//    
//    if (head == NULL) {
//        head = nodeBaru;
//    } else {
//        Node *temp = head;
//        while (temp->next != NULL) {
//            temp = temp->next;
//        }
//       temp->next = nodeBaru;
//       nodeBaru->prev = temp; // Sambungkan prev ke temp (node terakhir lama)
//    }
//}
//
//void traverse() {
//    Node *temp = head; 
//    while (temp != NULL) {
//        cout << "[" << temp->data << "]";
//        if(temp->next != NULL) cout << "<->";
//        temp = temp->next;
//    }
//    cout << "-> NULL" <<endl;
//}
