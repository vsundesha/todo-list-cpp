/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   header.cpp
 * Author: vsundesh
 * 
 * Created on 09 November 2018, 12:30
 */

#include <iostream>

#include "header.h"

header::header() {
    std::cout << "Welcome" << std::endl;
}

//header::header(const header& orig) {
//}

header::~header() {
    std::cout << "Bye" << std::endl;
}

void header::addtoarray(){
    std::string task;
    std::cout << "write" <<std::endl;
    std::getline(std::cin, task);
    arr.push_back(task);
}


int header::chooseaction(){
    std::cout << "\n1. add task" << std::endl;
    std::cout << "2. delete task" << std::endl;
    std::cout << "3. list task" << std::endl;
    std::cout << "4. exit application" << std::endl;
    int action;
    std::cin >> action;
    std::cin.ignore();
    return action;
}

int header::deletetask(){
    std::cout << "task number to delete" << std::endl;
    int tasknumber;
    std::cin >> tasknumber;
    
    return tasknumber;
}

void header::listtask(){
    for (int i=0; i<arr.size(); i++){
        std::cout <<  i << ". " << arr.at(i) << std::endl;
    } 
}