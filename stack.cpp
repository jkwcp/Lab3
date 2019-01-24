//
// Created by Jackie Wang on 2019-01-24.
//


#include "stack.hpp"

#define SIZE 10

using namespace std;

class stack {
public:
    int list[SIZE];// An array store ints
    int index; //An int record the position of top component

    //default constructor
    //Initialized with index of the top to be -1
    stack() {
        index = -1;//a new stack is empty, the index cannot be real
    };

    //push
    //Input: an int
    //Addes the int to the top of the stack
    //Return: true if added, false otherwise
    bool push(int n) {
        if (index == SIZE - 1) {
            return false;
        } else {
            index++;
            list[index] = n;
            return true;
        }
    }

    //pop
    //to delete the top component in the slack
    //input: void
    //return: void
    void pop() {
        if (index > -1) {
            index--;
        }
    }//ignoring the int at the top after decrementing the index, because

    //top
    //To show top member of the stack
    //input: void
    //return: the int at end of the stack
    const int top() {
        return list[index];
    }

    //empty
    //tell if the function is empty
    //Input: void
    //Return: bool
    const bool empty() {
        return (index == -1);
    }

    //full
    //if the stack is full
    //input:void
    //retur: bool
    const bool full() {
        return (index == SIZE - 1);
    }

    //print
    //Print the the stack to standard output
    string print() {
        string message;
        for (int i = 0; i <= index; i++) {
            message.append(to_string(i));
            message.append(": ");
            message.append(to_string(list[i]));
            message.append(";");
            message.append("\n");
        }
        cout << message << endl;
    }
};
