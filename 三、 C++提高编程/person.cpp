#include"person.h"

template<class T1, class T2>
inline Person<T1, T2>::Person(T1 name, T2 age) :m_Name(name), m_Age(age){}

template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "ÐÕÃû£º " << this->m_Name << "	ÄêÁä£º " << this->m_Age << endl;
}