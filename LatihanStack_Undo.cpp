#include <iostream>
using namespace std;

struct Node {
    string teks; 
    Node* next;
};

Node* top = NULL;

void ketikTeks() {
    Node* nodeBaru = new Node;
    
    cout << "Masukkan teks: ";

    cin.ignore(); 
    
    getline(cin, nodeBaru->teks);

    nodeBaru->next = top;
    top = nodeBaru;
    
    cout << "Teks disimpan.\n";
}

void undo() {
    if (top == NULL) {
        cout << "Tidak ada teks yang bisa di-undo. Teks Kosong.\n";
        return;
    }

    Node* temp = top;
    cout << "Melakukan Undo Pada: " << temp->teks << endl;
    
    top = top->next;
    delete temp;
}

void tampilkanDokumen() {
    cout << "\n----- ISI DOKUMEN -----" << endl;
    
    if (top == NULL) {
        cout << "[Kosong]" << endl;
    } else {
    	Node* helper = top;
    	while(helper != NULL){
    		cout << helper->teks << endl;
    		helper = helper->next;
		}
    }
    cout << "--------------------------" << endl;
}

int main() {
    int pilihan;

    do {
        cout << "\n----- TEXT EDITOR -----" << endl;
        cout << "1. Ketik Teks\n";
		cout << "2. Undo\n";
		cout << "3. Tampilkan Dokumen\n";
		cout << "4. Keluar\n";
		cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            ketikTeks();
        } else if (pilihan == 2) {
            undo();
        } else if (pilihan == 3) {
            tampilkanDokumen();
        } else if (pilihan == 4) {
            cout << "Keluar dari Program" << endl;
        } else {
            cout << "Pilihan salah!";
        }
    } while (pilihan != 4);

    return 0;
}
