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
void tambahDataHead();

int main() {
    inputData();      
    cout << endl;
    tambahDataHead(); 
    
    cout << "\nData setelah penambahan di awal:" << endl;
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
            //Menunjuk ke diri sendiri karena baru ada 1 node
            head->next = head;
            head->prev = head;
        } else {
            tail->next = nodeBaru;
            nodeBaru->prev = tail;
            
            //Hubungkan node baru (ujung) kembali ke head
            nodeBaru->next = head;
            head->prev = nodeBaru;
            
            tail = nodeBaru; 
        }
    }
}

void tambahDataHead() {
    if (head == NULL){
    	inputData();
		return; // jika list kosong
	}

    int nilai;
    cout << "Masukkan data yang ditambahkan di awal: ";
    cin >> nilai;
    
    Node *nodeBaru = new Node;
    nodeBaru->data = nilai;
    
    // Cari node terakhir (tail) karena tail harus menunjuk ke head baru
    Node *tail = head->prev; 

    nodeBaru->next = head;      // Node baru menunjuk ke head lama
    nodeBaru->prev = tail;      // Node baru menunjuk ke tail
    head->prev = nodeBaru;      // Head lama menunjuk balik ke node baru
    tail->next = nodeBaru;      // Tail menunjuk ke head yang baru
    
    head = nodeBaru;   
}

void traverse() {
    if (head == NULL) {
        cout << "List kosong!" << endl;
        return;
    }

    Node *temp = head; 
    // Menggunakan do-while karena kondisi temp != head akan langsung salah di awal
    do {
        cout << temp->data;
        cout << " <-> ";
        temp = temp->next;
    } while (temp != head); 
    cout << "(Kembali ke Head: " << head->data << ")" << endl;
}


//Linear 
//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node *next;
//    Node *prev; 
//};
//
//Node *head = NULL;
//
//void traverse();
//void inputData();
//void tambahDataHead();
//
//int main() {
//    inputData();      
//    cout << endl;
//    tambahDataHead(); 
//    
//    cout << "\nData setelah penambahan di awal:" << endl;
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
//        nodeBaru->prev = NULL; 
//
//        if(head == NULL) {
//            head = nodeBaru;
//            tail = nodeBaru;
//        } else {
//            tail->next = nodeBaru;
//            nodeBaru->prev = tail; //Menyambungkan dengan node sebelumnya
//            tail = nodeBaru;
//        }
//    }
//}
//
//void tambahDataHead() {
//    int nilai;
//    cout << "Masukkan data yang ditambahkan di awal: ";
//    cin >> nilai;
//    Node *nodeBaru = new Node;
//    nodeBaru->data = nilai;
//    nodeBaru->next = head;
//    nodeBaru->prev = NULL; //databaru di head, prev menjadi null
//
//    if (head != NULL) {
//        head->prev = nodeBaru; // Hubungkan head lama balik ke node baru
//    }
//    head = nodeBaru;
//}
//
//void traverse() {
//    Node *temp = head; 
//    cout << "NULL <- ";
//    while (temp != NULL) {
//        cout << temp->data;
//        if (temp->next != NULL) cout << " <-> ";
//        temp = temp->next;
//    }
//    cout << " -> NULL" << endl;
//}
