//Elizabeth Fanton 10/13/26 COSC - III
//Implementing a couple of functions for a linked list
#pragma once
#include <iostream>
#include <string>
#include<algorithm>
#include<forward_list>

using namespace std;

template<typename Temp>
struct Node
{
public:
	//string name;
	//Node* pNext = nullptr;
	Temp info;
	Node<Temp>* link;
};

template<typename Temp>
class nameLink
{
private:
	Node <Temp>* name = NULL;
	Node <Temp>* secondName = NULL;
	int choose;
	//Node* pHead = nullptr;
	
public:
	//void name();
	//name() = default;
	//void name(const string& firstValue);
	void setName();
	
	
	//void SecondName(const string& secName);
	void setSecondName();
	void setChoose();
	void print();

	string getName();
	string getSecondName();
	int getChoose();

	//functions
	void lastName();
	void firstName();
	void whatName();

};

