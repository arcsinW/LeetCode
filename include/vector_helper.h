#ifndef VECTOR_HELPER_H
#define VECTOR_HELPER_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

class VectorHelper
{

public:
    static void readVector(string file_path, vector< vector<int> > &matrix);
    static void printVector(vector<int> &vec);
    static void printVector(vector<string> &vec);
    static void printVector(vector< vector<int> > &matrix);

//    static void readVector(string file_path, vector< vector<int> > &matrix)
//    {
//        //./data.txt
//        ifstream file(file_path);
//        if (!file)
//        {
//            cout << "Unable to open file";
//        }
//
//        string line;
//        int tmp;
//        while (!getline(file, line).eof())
//        {
//            istringstream line_stream(line);
//            vector<int> tmp_line;
//            tmp_line.clear();
//            while (!line_stream.eof())
//            {
//                line_stream >> tmp;
//                tmp_line.push_back(tmp);
//            }
//            matrix.push_back(tmp_line);
//        }
//    }
//
//    static void printVector(vector<int> &vec)
//    {
//        for (int i = 0; i < (int)vec.size(); i++)
//        {
//            cout << vec.at(i) << " ";
//        }
//        cout << endl;
//    }
//
//    static void printVector(vector< vector<int> > &matrix)
//    {
//        for (vector< vector<int> >::iterator matrix_iter = matrix.begin();
//        matrix_iter != matrix.end(); matrix_iter++)
//        {
//            for (vector<int>::iterator row_iter = (*matrix_iter).begin();
//                row_iter != (*matrix_iter).end(); row_iter++)
//                {
//                    cout << (*row_iter) << " ";
//                }
//                cout << endl;
//        }
//        cout << endl;
//    }
//
//    static void printVector(vector<string> &vec)
//    {
//        for (int i = 0; i < (int)vec.size(); i++)
//        {
//            cout << vec.at(i) << " ";
//        }
//        cout << endl;
//    }

};

#endif // VECTOR_HELPER_H
