#pragma once
class MyString
{
	char* str;
	int l;
	static unsigned int objcount;
public:
	MyString();
	MyString(int size);
	MyString(const char* st);
	MyString(const initializer_list<char>& list);
	MyString(const MyString& obj);
	MyString(MyString&& obj);
	~MyString();


	void MyStrcpy(MyString& obj);
	void Print();
	bool MyStrStr(const char* str);
	void MyChr(char c);
	int MyStrLen();
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);
	char* GetStr();
	int Getlength();
	MyString& operator=(const MyString& obj);
	MyString& operator=(MyString&& obj);
};