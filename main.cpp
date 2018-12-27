/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: vsundesh
 *
 * Created on 20 August 2018, 15:41
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "header.h"

using namespace std;

/*
 * 
 */

int main() {
    header h = header();
    int choise = h.chooseaction();
    while(choise != 4){
        switch(choise){
            case 1: {
                h.addtoarray();
                h.listtask();
                break;
            }
            case 2:{
                int tasknumber = h.deletetask();
                h.arr.erase(h.arr.begin() + tasknumber);
                break;
            }
            case 3:{
                h.listtask();
                break;
            }
            default : 
                std::cout << "default" << std::endl;
                break;
        };
        choise = h.chooseaction();  
    }
    
    return 0;
}