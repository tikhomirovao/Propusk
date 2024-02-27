#include <iostream>
#include <stdlib.h>
#include <string> 
#include <string.h>

using namespace std;

class Propusk
{
    string FIO;                                                                         //����-������ - ���
    string FOTO;                                                                        //����-������ - ���� � ����� � �����������
    const int ID;                                                                       //����������� ����-����� ��������
public:
    Propusk(int id, string fio, string foto) : ID{ id }, FIO{ fio }, FOTO{ foto } {};   //����������� � ����������� � ��������������� ������������� ����� 
    void Show()const;                                                                   //�������� ������ ������ ���� ����� �� �����
    void SetFIO(string);                                                                //�������� ���-������ ��� ��������� FIO
    void SetFOTO(string);                                                               //�������� ���-������ ��� ��������� FOTO
    const string GetFOTO()const;                                                        //�������� ���-������ ��� �������� �������� FOTO
    const string GetFIO()const;                                                         //�������� ���-������ ��� �������� �������� FIO
    const int GetID()const;                                                             //�������� ���-������ ��� �������� �������� ID
};


int main()
{
    system("chcp 1251");
    system("cls");

    Propusk A(1, "������ ���� ��������", "D:\\avtog\\� ��������\\IMG_20210821_190243.jpg");
    A.Show();
    Propusk B(2, "������ ���� ��������", "D:\\avtog\\� ��������\\IMG_20211231_121206.jpg");
    B.Show();
    A.SetFIO("������ ���� ���������");
    A.Show();
    B.SetFOTO("D:\\avtog\\� ��������\\IMG_20220121_230628.jpg");
    B.Show();
    cout << B.GetID() << endl;
    cout << A.GetFIO() << endl;
    Propusk C(3, "������� ������� ����������", "D:\\avtog\\� ��������\\IMG_20220624_165511.jpg");
    C.Show();
    cout << C.GetFOTO() << endl;
}
void Propusk::Show() const                                                              //���������� ��������� ������  ������ ���� ����� �� �����
{
    cout << "ID" << "\t" << ID << endl;
    cout << "���" << "\t" << FIO << endl;
    cout << "����" << "\t" << FOTO << endl;
    cout << endl;
}
void Propusk::SetFIO(string fio)                                                        //���������� ��������� ���-������ ��� ��������� FIO
{
    FIO = fio;
}
void Propusk::SetFOTO(string foto)                                                      //���������� ��������� ���-������ ��� ��������� FOTO
{
    FOTO = foto;
}
const string Propusk::GetFOTO() const                                                   //���������� ��������� ���-������ ��� �������� �������� FOTO
{
    return FOTO;
}
const string Propusk::GetFIO() const                                                    //���������� ��������� ���-������ ��� �������� �������� FIO
{
    return FIO;
}
const int Propusk::GetID() const                                                        //���������� ��������� ���-������ ��� �������� �������� ID
{
    return ID;
}