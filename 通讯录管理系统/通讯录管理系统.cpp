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
		cout << "通讯录已满" << endl;
		return ;
	}
	else {
		string name;
		cout << "输入姓名" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		cout << "输入性别" << endl;
		cout << "1-男" << endl;
		cout << "2-女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入错误" << endl;
		}
		cout << "输入年龄" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		cout << "输入电话" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		cout << "输入家庭住址" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		abs->m_Size++;
		cout << "添加成功" << endl;
		system("cls");//清屏
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
	cout << "输入要删除联系人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {

	}
	else {
		cout << "查无此人" << endl;
	}
}
void showPerson(Addressbooks* abs) {
	if (abs->m_Size == 0) {
		cout << "记录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "姓名" << abs->personArray[i].m_Name << "/t";
			cout << "性别" << (abs->personArray[i].m_Sex ==1?"男":"女") << "/t";
			cout << "年龄" << abs->personArray[i].m_Age << "/t";
			cout << "电话" << abs->personArray[i].m_Phone << "/t";
			cout << "住址" << abs->personArray[i].m_Addr << endl;
		}
	}system("pause");
	system("cls");
}
void Menu() {
	cout << "1.添加联系人" << endl;
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出通讯录" << endl;
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
		case 1://"1.添加联系人"
			addPerson(&abs);
			break;
		case 2: //2.显示联系人
			showPerson(&abs)
			break;
		case 3:// 3.删除联系人
			break;
		case 4://"4.查找联系人
			break;
		case 5: //5.修改联系人
			break;
		case 6: //6.清空联系人
			break;
		case 0:// 0.退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		default:
			break;


		}
		
	} 
	
	system("pause");
	return 0;
}