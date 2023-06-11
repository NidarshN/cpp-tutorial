# CPP Programming Tutorial

## Executing a CPP File

    g++ file.cpp -o file_output.out
    ./file_output.out

To make the execution simpler, I created a function c_run and placed it inside .zshrc / .bashrc file

    function c_run(){
        g++ "$1" -o "output.out"
        ./output.out
    }

To execute the C++ file in the terminal, just run the following command  
    
    $ c_run filename.cpp
