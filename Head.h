
#ifndef __HEAD_H
#define __HEAD_H 201609

#include "Part.h"

class Head : public Part{
  public:
    Head(int p_part_type, int h_head_type)
    : Part(p_part_type), head_type(h_head_type) { }

    static const int square = 0;
    static const int round = 1;
    static const int triangular = 2;
    static const int flat = 3;
    static const int num_types = 4;

    int getType();

    void setType(int h_head_type);

  private:
    int head_type;
};
#endif
