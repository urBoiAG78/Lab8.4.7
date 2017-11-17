/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on November 16, 2017, 2:48 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 

 */
class Matrix {
public:
    Matrix(int a, int b, int c, int d){
    
    v[0][0]=a;
    v[0][1]=b;
    v[1][0]=c;
    v[1][1]=d;
}
    void print(ostream &os) const{
        cout << v[0][0]<<" "<< v[0][1]<< endl;
        cout << v[1][0]<< " "<< v[1][1]<< endl;
        cout<< "--------"<< endl;
    }
    void add(const int& rhs){
        for(int i =0; i < 2; i++)
        {
            for(int j =0; j < 2; j++)
            {
                v[i][j] += rhs;
            }
        }
    }
    void operator+(const int& rhs){
        add(rhs);
    }
    
    void add(Matrix& m){
        for(int i =0; i < 2; i++)
        {
            for(int j =0; j < 2; j++)
            {
                v[i][j] += m.v[i][j];
            }
        }
    }
    void operator+(const Matrix& m){
        add(m);
    }
private:
    int v[2][2];
};

int main(int argc, char** argv) {

    return 0;
}

