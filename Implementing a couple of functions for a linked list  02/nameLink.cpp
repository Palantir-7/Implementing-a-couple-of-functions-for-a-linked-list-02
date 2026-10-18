#include"nameLink.h"
#include<iostream>

//void nameLink::name(const string& firstValue)
//{
//	nameLink::pHead = new Node;
//	nameLink::pHead->name = firstValue;
//}
//
//void nameLink::setName()
//{
//	string strInput;
//	cout << "Enter a name, first or last: ";
//	cin >> strInput;
//	nameLink::pHead->name = strInput;
//}
//
//void nameLink::SecondName(const string& secName)//gets a second name from the user?
//{
//	Node* pnewNode = new Node;
//	pnewNode->name = secName;
//
//	pnewNode->pNext = pHead;
//	pHead = pnewNode;
//}
//
//void nameLink::setSecondName()
//{
//	string strInput2;
//	cout << "Enter a second name, first or last: ";
//	cin >> strInput2;
//	nameLink::pHead->name = strInput2;
//}
//
//
//void nameLink::print()
//{
//	Node* pcurrent = pHead;
//	while (pcurrent != nullptr)
//	{
//		cout << pcurrent->name << endl;
//		pcurrent = pcurrent->pNext;
//	}
//}

/*========================================================================================*/
template<typename Temp>
inline void nameLink<Temp>::print()//print function
{ 
	Node<Temp>* current;
	current = current -> name;

	while (current != NULL)
	{
		cout << current->info << endl;
		current = current->link;
	}
}

template<typename Temp>
inline void nameLink<Temp>::setName()
{
	cout << "Enter a name, first or last: ";
	cin >> name;
}
template<typename Temp>
inline void nameLink<Temp>::setSecondName()
{
	cout << "Enter a second name, first or last: ";
	cin >> secondName;

}

template<typename Temp>
inline void nameLink<Temp>::setChoose()
{
	cout << "Enter 1 to add a first name, 2 to add a last name: ";
	cin >> choose;
}

template<typename Temp>
inline string nameLink<Temp>::getName()
{
	return name;
}

template<typename Temp>
inline string nameLink<Temp>::getSecondName()
{
	return secondName;
}

template<typename Temp>
inline int nameLink<Temp>::getChoose()
{
	return choose;
}
/*---------------------------------------------------------------------------------------------------*/
//functions
//need two functions here one to insert or assign first name if it's 1 and a last name if it's 2
template<typename Temp>
inline void nameLink<Temp>::lastName()
{
	//in this it will insert on the end of the original string a group of letters
	nameLink yourLastName;
	forward_list<string> listStr;
	listStr = yourLastName.getName();//this puts string "name" in list...

	//yourLastName.getName();//gets original string
	listStr.insert_after(yourLastName.getSecondName());//should have the "last name" user input on the end now

}

template<typename Temp>
inline void nameLink<Temp>::firstName()
{
	//in this it will insert on the beginning of the original string a group of letters
	nameLink yourFirstName;
	forward_list<string> listStr2;
	listStr2 = yourFirstName.getName();

	listStr2.push_front(yourFirstName.getSecondName());


}

template<typename Temp>
inline void nameLink<Temp>::whatName()
{
	//in this it will take "choose", check if it's one and if it's one it will call 
	nameLink chosen;
	if (chosen.getChoose() == 1)
	{
		//call firstName function
		firstName();
	}
	else if (chosen.getChoose() == 2)
	{
		//call lastName function
		lastName();
	}
	else if(chosen.getChoose() < 1 || chosen.getChoose() > 2)
	{
		cout << "Invalid number was entered. Please restart." << endl;
		break;
	}
}


