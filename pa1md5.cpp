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

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char * argv[])
{
    // if there are no command line arguments then the program reads in a single line of input (from the bottom of the wiki article),
    // hashes it then outputs the completed hash

    string sampleHash = "The quick brown fox jumps over the lazy dog";
    if(argc == 1)
    {

    }
    else
    {
        int N = atoi(argv[1]);
        for(int i = 0; i < N; ++i)
        {
            if(i == 0 || i == N-1)
                cout << "TEST<" << i+1 << ">" << endl;
        }

    }

    //if a commandline argument is provided, the provided number is N


    return 0;
}