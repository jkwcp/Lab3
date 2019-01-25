//
// Created by Jackie Wang on 2019-01-24.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

#include <iostream>
#define SIZE 10

namespace comp3512{
    class stack {
    public:

        //default constructor
        //Initialized with index of the top to be -1
        stack();

        //push
        //Input: an int
        //Addes the int to the top of the stack
        //Return: true if added, false otherwise
        bool push(int n);

        //pop
        //to delete the top component in the slack
        //input: void
        //return: void
        void pop();

        //top
        //To show top member of the stack
        //input: void
        //return: the int at end of the stack
        const int top();

        //empty
        //tell if the function is empty
        //Input: void
        //Return: bool
        const bool empty();

        //full
        //if the stack is full
        //input:void
        //return: bool
        const bool full();

        //print
        //Print the the stack to standard output
        std::string print();
    private:
        int list[SIZE];// An array store ints
        int index; //An int record the position of top component
    };
}

#endif
