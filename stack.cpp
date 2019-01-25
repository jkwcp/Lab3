//
// Created by Jackie Wang on 2019-01-24.
//


#include "stack.hpp"
using namespace std;

    comp3512::stack::stack() {
        index = -1;//a new stack is empty, the index cannot be real
    };

    bool comp3512::stack::push(int n) {
        if (index == SIZE - 1) {
            return false; //return false if the stack is already full
        } else {
            index++;
            list[index] = n;
            return true;
        }
    }

    void comp3512::stack::pop() {
        if (index > -1) {
            index--;
        }
    }

    const int comp3512::stack::top() {
        if (index == -1){
            return NULL;
        } else {
            return list[index];
        }
    }

    const bool comp3512::stack::empty() {
        return (index == -1);
    }

    const bool comp3512::stack::full() {
        return (index == SIZE - 1);
    }

    string comp3512::stack::print() {
        string message;
        for (int i = 0; i <= index; i++) {
            message.append(std::to_string(i));
            message.append(": ");
            message.append(std::to_string(list[i]));
            message.append(";");
            message.append("\n");
        }
        cout << message << endl;
        return message;
    }

