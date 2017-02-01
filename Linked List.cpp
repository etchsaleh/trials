//
//  Linked List.cpp
//  
//  Created by Hesham Saleh on 5/19/16.
//  Copyright (c) 2016 Hesham Saleh. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>

//Recursive Search.
string searchRec(node* head, int target){
    
    if(head->next == NULL) return "Not Found";
    
    if(head->data == target)return "Found";
    
    return searchRec(head->next,target);
}

//Iterative Search.
void search(int target, int x) //Find element in list.
{
    bool found = false;
    node  *ptr = head;
    for(int i = 0; i<x; i++, ptr = ptr->next)
    {
        if(target == ptr->data)
            found = true;
    }
    
    found? cout<<"Found":cout<<"Not Found";
}

//Print Lots.
void printLots(node *headL, node *headP){
    node*ptr2=headP;
    while(headP!=NULL){
        node*ptr1=headL;
        for(int i = 0; i<ptr2->data; ptr1=ptr1->next, i++);
        cout<<ptr1->data;
        ptr2=ptr2->next;
    }
}

//_____________________________________________________


//2: Doubly/Circle Linked lists.


//Find node.
void find(node* head, int n){
    node* ptr = head;
    do {
        if(ptr->data == n){
            cout<<"Found";
            return;
        }
        ptr=ptr->next;
    }
    while (ptr!=head);
}

//Find node (Recursive)
void findRec(node* head, int n){
    
    node* ptr = head;
    if(ptr->data == n){
        cout<<"Found";
        return;
    }
    else if(ptr = head){
        cout<<"Not Found";
        return;
    }
    
    return findRec(ptr->next,n);
}
