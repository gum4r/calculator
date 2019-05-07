#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

//--------------------------------------------
//ОБЫЧНЫЕ ФУНКЦИИ
//--------------------------------------------

//intSum_twoVar
void intSum_twoVar();

//intSub_twoVar
void intSub_twoVar();

//intMult_twoVar();
void intMult_twoVar();

//div
void div();

//asc
void asc();

//root
void root();


//--------------------------------------------
//СИСТЕМЫ СЧИСЛЕНИЯ
//--------------------------------------------



//bin_to_dec
void bin_to_dec();

//dec_to_bin
void dec_to_bin();

//for dec_to_bin
int asc(int);


//--------------------------------------------
//БИНАРНЫЙ КАЛЬКУЛЯТОР
//--------------------------------------------

void dis_forBinCalc();

int bin_to_dec_for_bin_calc(string);

vector<int> dec_to_bin_for_bin_calc(int);

void bin_sum();
void bin_sub();
void bin_mult();
void bin_div();
int asc_bin(int);