#ifndef stack_H
#define stack_H
#include<iostream>
using namespace std;
 struct stack_node{
 	int data;
 	stack_node *next;
 	stack_node(int val){
	  data = val;
	  next = NULL;
	 }
 };
 struct stack{
 	  stack_node *top = NULL;
 	 void push(int val){
 	 	stack_node *newnode = new stack_node(val);
 	 	newnode->next = top;
 	 	top = newnode;
	  }
	
	 void pop(){
	  if(top == NULL){
	  	cout << "stack is empty";
	  	return;
	  }
	     stack_node *temp = top;
        top = top->next;
        cout << temp->data;
        delete temp;
	 }
	 
	 int peek(){
	 	return top->data;
	 }
	 void print(){
	 	stack_node *temp = top ;
	 	while(temp!= NULL){
	 		cout << temp->data << " ";
	 		temp = temp->next;
		 }
		 cout << endl;
	 }
	 
 	
 };
 #endif
 
