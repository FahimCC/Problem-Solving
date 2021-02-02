#include <bits/stdc++.h>
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
  Node* removeDuplicates(Node *head)
  {
    //Write your code here
    if (!head)
      return head;

    Node *p = (Node*)malloc(sizeof(Node));
    p = head;

    while (p->next)
    {
      if (p->data == p->next->data)
        p->next = p->next->next;
      else
        p = p->next;
    }

    return head;
  }

  Node* insert(Node *head, int data)
  {
    Node* p = new Node(data);
    if (head == NULL) {
      head = p;

    }
    else if (head->next == NULL) {
      head->next = p;

    }
    else {
      Node *start = head;
      while (start->next != NULL) {
        start = start->next;
      }
      start->next = p;

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
  head = mylist.removeDuplicates(head);

  mylist.display(head);

}