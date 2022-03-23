//
//  main.cpp
//  EGR_126
//
//  Created by BLVK HOLMES on 10/23/19.
//  Copyright © 2019 BLVK HOLMES. All rights reserved.
//
// Filename:  FileOutputSample.cpp
#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream myfile;
    myfile.open ("example.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();
    return 0;
    
}
