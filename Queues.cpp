//  Queues.cpp
//
//  Created by Hesham Saleh on 5/19/16.
//  Copyright (c) 2016 Hesham Saleh. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//Sorted Order Queue
void sorted(node* headA, node* headB, queue *q){
    while(headA!=NULL && headB!=NULL){
        if(headA->data < headB->data){
            q.push(headA->data);
            headA=headA->next;
        }
        else {
            q.push(headB->data);
            headB=headB->data;
        }
    }
}


//Reverse queue using stack.
void reverse(stack *s, queue *q) {
    
    while (!q.empty()){
        
        s.push(q.front());
        q.pop();
        
    }
    
    while (!s.empty()){
        
        q.push(s.top());
        s.pop();
        
    }
    
}
