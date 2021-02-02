#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node(int d) {
    data = d;
    next = NULL;
  }
};
class Solution {
public:

  Node* insert(Node *head, int data)
  {
    //Complete this method
    static Node *p;
    if (head == NULL)
    {
      Node *first = (Node*)malloc(sizeof(Node));
      first->data = data;
      first->next = NULL;
      head = first;
      p = first;
    }
    else
    {
      Node *list = (Node*)malloc(sizeof(Node));
      list->data = data;
      list->next = NULL;
      p->next = list;
      p = list;
    }
    return head;
  }

  void display(Node *head)
  {
    Node *start = head;
    while (start)
    {
      cout << start->data << " ";
      start = start->next;
    }
  }
};
int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  Node* head = NULL;
  Solution mylist;
  int T, data;
  cin >> T;
  while (T-- > 0) {
    cin >> data;
    head = mylist.insert(head, data);
  }
  mylist.display(head);

}