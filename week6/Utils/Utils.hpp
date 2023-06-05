//
//  Utils.hpp
//  Utils
//
//  Created by Bussarin Apichitchon on 4/6/2566 BE.
//

#ifndef Utils_hpp
#define Utils_hpp

namespace sdds {

class Utils {
//  NO attribute or Variable
    
public:
    
    // get integer
    int getInt();
    
    // get integer between min and max with option prompt question
    int getInt(int min, int max, const char* prompt = nullptr);
    
};

// MARK: this prototype, extern makes a file scope variable >> global
extern Utils U;


}

#endif /* Utils_hpp */
