//safe guard
#ifndef line_h
#define line_h

namespace sdds {

//void line (char fill, unsigned int length);
//
//void line (char fill); //79 char long
//
////no more void >> empty means void
//void line();

void line(unsigned int len);

//part2
//fill is NOT provided put '='; if length is NOT provided 79
void line (char fill = '=', unsigned int length = 79);

}

#endif /* line_h */
