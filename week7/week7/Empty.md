#  overloading function

1 - operator must exist so that we can overload
2 - polymorphism >> doing the same thing but different way


# operator and operand
operator has 2 category
1 - binary
    accept 2 operands
        Example:
            a + b >> + is operator, a is left operand, b is right operand
    at least operand >> + - * / % >> by nature operand return some value
    has 2 category
    1. has side effect >> change one or both operand during the process
        Example:
            a = b >> the value of a will be changed (value of a will be overwritten by the value of b)
            a += b
    2. NO side effect
        Example:
            a + b >> return sum, a and b still be the same
            a / b
2 - unary

** inline = writing the decoration and definition inside the class
