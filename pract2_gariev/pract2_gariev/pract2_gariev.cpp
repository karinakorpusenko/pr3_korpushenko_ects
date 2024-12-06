// pract2_gariev.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <list>
using namespace std;
struct Contact {

    char name[255];
    char phone[12];
};

void PrintContact(Contact myContact) {
    setlocale(LC_ALL, "Russian");
    cout << "Name:"<<myContact.name <<"\n" << endl;
   cout <<"Telephone:"<<myContact.phone << endl;
}

void EnterContact(Contact& myContact) {
    cout << "Введите имя\n";
    cin >> myContact.name;
    cout << "Введите номер телефона\n";
    cin >> myContact.phone;
}
void PrintAllContacts( list<Contact>& contacts) {
    for (const auto& contact : contacts) {
        PrintContact(contact);
      
    }
}
void AddContact(list<Contact>& contacts) {
    Contact newContact;
    EnterContact(newContact);
    contacts.push_back(newContact);
}

void RemoveContact(list<Contact>& contacts) {
    char name[255];
    cout << "Введите имя контакта для удаления: ";
    cin >> name;

    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (strcmp(it->name, name) == 0) {
            contacts.erase(it);
            cout << "Контакт удален." << endl;
            return;
        }
    }
    cout << "Контакт не найден." << endl;
}

void UpdateContact(list<Contact>& contacts) {
    char name[255];
    cout << "Введите имя контакта для обновления: ";
    cin >> name;

    for (auto& contact : contacts) {
        if (strcmp(contact.name, name) == 0) {
            EnterContact(contact);
            cout << "Контакт обновлен." << endl;
            return;
        }
    }
    cout << "Контакт не найден." << endl;
}
class Triangle
{
private:
    float side1=0;
    float side2=0;
    float side3=0;
public:
    void setSide1(float sside1) {
        side1 = sside1;
    }
    void setSide2(float sside2) {
        side2 = sside2;
    }
    void setSide3(float sside3) {
        side3 = sside3;
    }
    float S(){
       
        return side1 * side2 * side3;
    };
};

int main()
{//1
   setlocale(LC_ALL, "Russian");
    srand(time(NULL));
 /*   int mass[3];
    for (int i = 0;i < 3;i++) {
        mass[i] = rand() % 100;
        cout << mass[i]<<" ";
    }
    cout << "\nОбратный массив ";
    for (int i = 2;i >= 0;i--) {
        cout << mass[i] << " ";}*/

    //2
  /*  int mass[2][3][4];
    int min = 10000000;
    for (int i = 0;i < 2;i++) {
        cout << "\n";
        for (int j = 0;j < 3;j++) {
            cout << "\n";
            for (int k = 0;k < 4;k++) {
                mass[i][j][k] = rand() % 100;
                cout << mass[i][j][k] << " ";
            }
        }
    }
    for (int i = 0;i < 2;i++) {
        cout << "\n";
        for (int j = 0;j < 3;j++) {
            cout << "\n";
            for (int k = 0;k < 4;k++) {
                if (mass[i][j][k] < min) {
                    min = mass[i][j][k];
               }
               
            } cout << min << " ";
            min = 100000000;
        }
    }*/

    //3
    list<Contact> contacts;
    int choice;

    do {
        cout << "1. Добавить контакт\n2. Показать все контакты\n3. Удалить контакт\n4. Обновить контакт\n0. Выход\nВыберите действие: ";
        cin >> choice;
        switch (choice) {
        case 1:
            AddContact(contacts);
            break;
        case 2:
            PrintAllContacts(contacts);
            break;
        case 3:
            RemoveContact(contacts);
            break;
        case 4:
            UpdateContact(contacts);
            break;
        case 0:
            cout << "Выход из программы." << endl;
            break;
        default:
            cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    } while (choice != 0);

    return 0;
    
   
    
    //4
   /* Triangle triangle;
    float side1, side2, side3;
    cout << "Введите 1 сторону\n";
    cin >> side1;
    cout << "Введите 2 сторону\n";
    cin >> side2;
    cout << "Введите 3 сторону\n";
    cin >> side3;
    triangle.setSide1(side1);
    triangle.setSide2(side2);
    triangle.setSide3(side3);
    cout << triangle.S();*/
    
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
