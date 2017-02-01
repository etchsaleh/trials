//  Stacks.cpp
//
//  Created by Hesham Saleh on 5/19/16.
//  Copyright (c) 2016 Hesham Saleh. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//Reverse a stack using push and pop.
void reverse(stack *s, queue *q) {
    
    while (!s.empty()){
        
        q.push(s.top());
        s.pop();
        
    }
    
    while (!q.empty()){
        
        s.push(q.front());
        q.pop();
        
    }
    
}

//Insert element in the middle of a stack.
void insertMid(stack *s, int n){
    stack temp;
    int x, c = 0;
    for(int i = 0; s!=NULL; i++){
        x = s.pop(&empty);
        temp.push(x);
        c++;
    }
    int avg = c/2;
    for(int i = 0; i<avg; i++){
        x = temp.pop(&empty);
        s.push(x);
        
    }
    s.push(n);
    for(int i = 0; i<avg; i++){
        x = temp.pop(&empty);
        s.push(x);
    }
