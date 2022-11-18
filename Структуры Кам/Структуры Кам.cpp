#include <iostream>
using namespace std;

const int n = 2; //Количество структур
int i;
bool kkk;
string writeklaw;
struct TRAIN {
    string numtrain[n], time[n];
    string city[n];
};

int main()
{
    //1
  /*  TRAIN* p = new TRAIN[n];*/
    TRAIN F;
    //Заполнение структуры
    for (int i = 0; i < n; i++) {
        cout << "Write City "; cin >> F.city[i];
        cout << "Write Number "; cin >> F.numtrain[i];
        cout << "Write Time "; cin >> F.time[i];
    }
    //2
    //Сортировка по времени
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < n-1; i++) {
            while (F.time[i] > F.time[i + 1]) {
                swap(F.time[i], F.time[i+1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "Sorted by time: " << F.city[i] << " " << F.numtrain[i] << " " << F.time[i] << endl;
    }
    //Нахождение по названию города
    cout << "Write City what are u want: "; cin >> writeklaw;
    for (int i = 0; i < n; i++) {
        if (F.city[i]==writeklaw) {
            kkk = 1;
        }
    }
    if (kkk = 0) {
        cout << "Not found ";
    }
    if (kkk = 1) {
        cout << "Cool I found: ";
        cout << endl << F.numtrain[i] << endl << F.time[i];
    }
}
