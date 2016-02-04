/* main.cpp
 *
 * This is the main file for c++ version of pa1md5 for Spring 2016 Advanced Programming at the University of Colorado
 * Denver.
 *
 * Author: Tyler Blanton
 * Date Started: January 26, 2016
 * Date Due: February 9, 2016
 * repository url: https://github.com/tlblanton/pa1md5_cpp.git
 */
//TODO there is a difference in the wiki pages results and mine, but only slightly. Find put why this is.

#include <iostream>
#include <iomanip>
#include "md5.h"

using namespace std;
#define MAX_MD5_SIZE (2048)

int main(int argc, char * argv[])
{
    // if there are no command line arguments then the program reads in a single line of input (from the bottom of the wiki article),
    // hashes it then outputs the completed hash
    if(argc == 1)
    {
        char hashStr[MAX_MD5_SIZE];
        cout << "Enter string you would like to md5 encrypt: ";
        cin.getline(hashStr, MAX_MD5_SIZE);

        unsigned char result[MAX_MD5_SIZE];
        MD5_CTX md5;
        MD5_Init(&md5);
        MD5_Update(&md5, hashStr, strlen(hashStr));
        MD5_Final(result, &md5);

        for(int i = 0; i < 16; ++i)
        {
            cout << std::hex << setfill('0') << setw(2) << (int)result[i];
        }
        cout << std::dec << endl;
    }
    else     //if a command line argument is provided, the provided number is N
    {
        int N = atoi(argv[1]);
        for(int i = 0; i < N; ++i)
        {
            char hashStr[MAX_MD5_SIZE];
            unsigned char result[MAX_MD5_SIZE];
            sprintf(hashStr, "Test<%d>", i+1);
            MD5_CTX md5;
            MD5_Init(&md5);
            MD5_Update(&md5, hashStr, strlen(hashStr));
            MD5_Final(result, &md5);

            if(i == 0 || i == N-1)
            {
                cout << hashStr;
                for (int j = 0; j < 16; ++j)
                {
                    cout << std::hex << setfill('0') << setw(2) << (int) result[j];
                }
                cout << std::dec << endl;
            }
        }
    }
    return 0;
}