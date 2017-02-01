//  Binary Search Trees.cpp
//
//  Created by Hesham Saleh on 5/19/16.
//  Copyright (c) 2016 Hesham Saleh. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//Count total number of nodes.
int countNodes(node *root) {
    if(root == NULL)
        return 0;
    
    return 1 + countNodes(root->left) + countNodes(root->right);
}

//Insert node.
node* insert(node *root, int data){
    if(root == NULL){
        node *n = new node();
        n->data = data;
        n->left = n->right = NULL;
        root = n;
    }
    
    else if(data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    
    return root;
}

//Delete a node.
node* Delete(node *root, int data){
    
    if(root == NULL) return root;
    
    if(data > root->data) root->right = Delete(root->right,data);
    
    else if(data < root->data) root->left = Delete(root->left,data);
    
    else {
        //leaf.
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        //1 child
        else if(root->left == NULL){
            node* temp = root;
            root = root->right;
            delete temp;
        }
        
        else if(root->right == NULL){
            node* temp = root;
            root = root->left;
            delete temp;
        }
        //2 children
        else {
            node* temp = findMin(root->right); //30 is minimum in right.
            
            root->data = temp->data;
            
            root->right = Delete(root->right,temp->data);
        }
    }
    
    return root;
}
