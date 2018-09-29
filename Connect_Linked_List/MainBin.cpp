#include <iostream>
#include "linearlinkedlist.h"

//两个链表长度分别为m,n
const int m = 3;
const int n = 20;



int main() {
	//初始化两个链表
	Linear_Linked_List<int> LLList_a(0);
	Linear_Linked_List<int> LLList_b(0);
	for (int i = 0; i < m-1; i++)
	{
		LLList_a.ListInsert(i + 2, i + 1);
	}
	for (int i = 0; i < n-1; i++)
	{
		LLList_b.ListInsert(i + 2, i + 1);
	}
	Node<int> *headpoint_c = LLList_a.HeadPoint;
	Node<int> *endpoint_a = LLList_a.getEndPoint();
	endpoint_a->next = LLList_b.HeadPoint;
	


	//安全销毁
	endpoint_a->next = NULL;


	system("pause");
}

