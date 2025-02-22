/**
 * ██╗   ██╗███╗   ███╗ █████╗ ██╗    ██╗ █████╗ ██████╗ ███████╗
 * ██║   ██║████╗ ████║██╔══██╗██║    ██║██╔══██╗██╔══██╗██╔════╝
 * ██║   ██║██╔████╔██║███████║██║ █╗ ██║███████║██████╔╝█████╗  
 * ╚██╗ ██╔╝██║╚██╔╝██║██╔══██║██║███╗██║██╔══██║██╔══██╗██╔══╝  
 *  ╚████╔╝ ██║ ╚═╝ ██║██║  ██║╚███╔███╔╝██║  ██║██║  ██║███████╗
 *   ╚═══╝  ╚═╝     ╚═╝╚═╝  ╚═╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝
 * 
 *  C++ VM detection library
 * 
 * ===============================================================
 *
 *  This program serves as a testing ground, it's not interesting tbh
 *  so I recommend you move on
 * 
 * ===============================================================
 * 
 *  - Made by: @kernelwernel (https://github.com/kernelwernel)
 *  - Repository: https://github.com/kernelwernel/VMAware
 *  - License: GPL 3.0
 */ 

#include "../src/vmaware.hpp"
#include <iostream>

int main(void) {
    //const bool test1 = VM::detect();
    //const bool test2 = VM::detect(VM::ALL);
    //const bool test3 = VM::detect(VM::DEFAULT);
    //const bool test4 = VM::detect(VM::DEFAULT, VM::ALL);
    const bool test4 = VM::detect(VM::DISABLE(VM::TIMER));
    const bool test5 = VM::detect(VM::DEFAULT, VM::DISABLE(VM::TIMER));
    const bool test6 = VM::detect(VM::DEFAULT, VM::DISABLE(VM::TIMER, VM::GPU));
    //const bool test7 = VM::detect(VM::NO_MEMO, VM::EXTREME, VM::MULTIPLE, VM::ENABLE_HYPERV_HOST);
    //const std::string test8 = VM::brand();
    //const uint8_t test9 = VM::percentage(VM::SPOOFABLE);
    //std::cout << (int)test9 << "\n";

    //VM::vmaware vm;
//
    //std::cout << "Is this a VM? = " << vm.is_vm << "\n";
    //std::cout << "How many techniques detected a VM? = " << static_cast<int>(vm.detected_count) << "\n";
    //std::cout << "What's the overview in a human-readable message? = " << vm.conclusion << "\n";

    return 0;
}