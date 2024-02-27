#include <iostream>
#include <stdlib.h>
#include <string> 
#include <string.h>

using namespace std;

class Propusk
{
    string FIO;                                                                         //поле-строка - ФИО
    string FOTO;                                                                        //поле-строка - путь к файлу с фотографией
    const int ID;                                                                       //константное поле-номер пропуска
public:
    Propusk(int id, string fio, string foto) : ID{ id }, FIO{ fio }, FOTO{ foto } {};   //конструктор с параметрами и унифицировнаной инициализации полей 
    void Show()const;                                                                   //прототип метода вывода всех полей на экран
    void SetFIO(string);                                                                //прототип Сет-метода для изменения FIO
    void SetFOTO(string);                                                               //прототип Сет-метода для изменения FOTO
    const string GetFOTO()const;                                                        //прототип Гет-метода для возврата значений FOTO
    const string GetFIO()const;                                                         //прототип Гет-метода для возврата значений FIO
    const int GetID()const;                                                             //прототип Гет-метода для возврата значений ID
};


int main()
{
    system("chcp 1251");
    system("cls");

    Propusk A(1, "Иванов Иван Иванович", "D:\\avtog\\с телефона\\IMG_20210821_190243.jpg");
    A.Show();
    Propusk B(2, "Петров Петр Петрович", "D:\\avtog\\с телефона\\IMG_20211231_121206.jpg");
    B.Show();
    A.SetFIO("Иванов Петр Сергеевич");
    A.Show();
    B.SetFOTO("D:\\avtog\\с телефона\\IMG_20220121_230628.jpg");
    B.Show();
    cout << B.GetID() << endl;
    cout << A.GetFIO() << endl;
    Propusk C(3, "Сидоров Николай Васильевич", "D:\\avtog\\с телефона\\IMG_20220624_165511.jpg");
    C.Show();
    cout << C.GetFOTO() << endl;
}
void Propusk::Show() const                                                              //реализация прототипа метода  вывода всех полей на экран
{
    cout << "ID" << "\t" << ID << endl;
    cout << "ФИО" << "\t" << FIO << endl;
    cout << "Фото" << "\t" << FOTO << endl;
    cout << endl;
}
void Propusk::SetFIO(string fio)                                                        //реализация прототипа Сет-метода для изменения FIO
{
    FIO = fio;
}
void Propusk::SetFOTO(string foto)                                                      //реализация прототипа Сет-метода для изменения FOTO
{
    FOTO = foto;
}
const string Propusk::GetFOTO() const                                                   //реализация прототипа Гет-метода для возврата значений FOTO
{
    return FOTO;
}
const string Propusk::GetFIO() const                                                    //реализация прототипа Гет-метода для возврата значений FIO
{
    return FIO;
}
const int Propusk::GetID() const                                                        //реализация прототипа Гет-метода для возврата значений ID
{
    return ID;
}