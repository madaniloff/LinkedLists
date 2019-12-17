//Methods and returns for the node class

#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

//Constructor
Node::Node() {
  student = NULL;
  next = NULL;
}
//Destructor
Node::~Node() {
  delete &student;
  next = NULL;
}
//Set the next node
void Node::setNext(Node* newnext) {
  next = newnext;
}
//Returns the next item in the linked list
Node* Node::getNext() {
  return next;
}
//Sets student pointer
void Node::setStudent(Student* newStudent) {
  student = newStudent;
}
//Returns student pointer
Student* Node::getStudent() {
  return student;
}
