/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   header.h
 * Author: vsundesh
 *
 * Created on 09 November 2018, 12:30
 */

#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
#include <vector>


class header {
    public:

        std::vector <std::string> arr;
        void addtoarray();
        int chooseaction();
        int deletetask();
        void listtask();

        header();
//        header(const header& orig);
        virtual ~header();
    private:

};

#endif /* HEADER_H */

