#include <iostream>
#include <string>
#define MAX 1000
using namespace std;
struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;

};
struct Addressbooks {
	struct Person personArray[MAX];
	int m_Size;
};
void addPerson(Addressbooks* abs) {
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼����" << endl;
		return ;
	}
	else {
		string name;
		cout << "��������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		cout << "�����Ա�" << endl;
		cout << "1-��" << endl;
		cout << "2-Ů" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "�������" << endl;
		}
		cout << "��������" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		cout << "����绰" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		cout << "�����ͥסַ" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
		system("cls");//����
	}
}
int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}
void deleteperson(Addressbooks* abs) {
	cout << "����Ҫɾ����ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {

	}
	else {
		cout << "���޴���" << endl;
	}
}
void showPerson(Addressbooks* abs) {
	if (abs->m_Size == 0) {
		cout << "��¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "����" << abs->personArray[i].m_Name << "/t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex ==1?"��":"Ů") << "/t";
			cout << "����" << abs->personArray[i].m_Age << "/t";
			cout << "�绰" << abs->personArray[i].m_Phone << "/t";
			cout << "סַ" << abs->personArray[i].m_Addr << endl;
		}
	}system("pause");
	system("cls");
}
void Menu() {
	cout << "1.�����ϵ��" << endl;
	cout << "2.��ʾ��ϵ��" << endl;
	cout << "3.ɾ����ϵ��" << endl;
	cout << "4.������ϵ��" << endl;
	cout << "5.�޸���ϵ��" << endl;
	cout << "6.�����ϵ��" << endl;
	cout << "0.�˳�ͨѶ¼" << endl;
}
int main() {
	Addressbooks abs;
	abs.m_Size = 0;
	int select = 0;
	while (true) {
		Menu();
		cin >> select;
		switch (select)
		{
		case 1://"1.�����ϵ��"
			addPerson(&abs);
			break;
		case 2: //2.��ʾ��ϵ��
			showPerson(&abs)
			break;
		case 3:// 3.ɾ����ϵ��
			break;
		case 4://"4.������ϵ��
			break;
		case 5: //5.�޸���ϵ��
			break;
		case 6: //6.�����ϵ��
			break;
		case 0:// 0.�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
		default:
			break;


		}
		
	} 
	
	system("pause");
	return 0;
}