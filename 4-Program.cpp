#include<iostream>
using namespace std;

struct Dugum {
    int veri;
    Dugum* sonraki;
};

Dugum* bas = NULL;
Dugum* son = NULL;

void Ekle(int x) {
    Dugum* temp = new Dugum();
    temp->veri = x;
    temp->sonraki = NULL;
    if(bas == NULL && son == NULL){
        bas = son = temp;
        return;
    }
    son->sonraki = temp;
    son = temp;
}

void Sil() {
    if(bas == NULL) {
        cout << "Kuyruk Bos\n";
        return;
    }
    Dugum* temp = bas;
    if(bas == son) {
        bas = son = NULL;
    }
    else {
        bas = bas->sonraki;
    }
    delete temp;
}

void Goster() {
    Dugum* temp = bas;
    while(temp != NULL) {
        cout << temp->veri << " ";
        temp = temp->sonraki;
    }
    cout << "\n";
}

int main() {
    int secim, deger;
    do {
        cout<<"Lutfen asagidaki islemlerden birini seciniz\n";
		cout<<"\n1. Ekleme\n2. Silme\n3. Goruntuleme\n4. Cikis\n";
        cout<<"Seciminiz: ";
        cin>>secim;
        switch(secim) {
            case 1: cout<<"Eklemek istediginiz degeri giriniz: ";
                    cin>>deger;
                    Ekle(deger);
                    break;
            case 2: Sil();
                    break;
            case 3: Goster();
                    break;
            case 4: break;
            default: cout<<"\nHatali secim!!! Lutfen tekrar deneyin!!!\n";
        }
    } while(secim != 4);

    return 0;
}
