# Review DMA
fopen == new (DMA)
    allocate the struct file and add stuff in it
fclose == delete
    giving the address and give it back
    
# Cin
cin has a polymorphic operator OR extraction which is extracts information out of cin which is console (a console input output object)
RULE for cin
1 - Extraction operator (>>) with cin always leaves at least one '\n' in keyboard buffer. 
2 - cin and operator, >>, for all overloads skips leading whitespaces
    Example:
            if user input >> 20 tabs and 40 spaces and 'a'
            ** all those tabs and spaces will be skipped and cin will read only 'a' 
            
cin and get
get is for "cstring" and 'char' only NOT number (Not getline)
** get will NOT ignore whitespace char so if you would like your code to read whitespace, it will be better to use cin.get than cin

get and getline
1 - get does NOT eat '\n' and lest it in the input buffer, whereas getline eats '\n' and throw it away
2 - reaches the limit
    Example:
        cin.get(var, 20) vs cin.getline(var, 20)
        if user input more than 20
        get >> NO fail but leave the rest in the keyboard for you to handle
        getline >> fail
        
# Formatting
** cout for double, fl, long double, long float >> cout will decide how it wanna show/print depends on the variable
    Example:
        123.123456789 >> 123.123
        0.00000234456 >> 2.34456e-06 (2.34456 * 10 to power of -6)
** tricky part >> you can set left to right but you CANNOT set right to left >> it won't come back to left
    SOLUTION: undo what you have done >> cout.unsetf(ios::left) OR cout.unsetf(ios::right)
    
# cout clog and cerror

