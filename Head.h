
 #ifndef __HEAD_H
 #define __HEAD_H 201609
 #include "string"

 class Head {
   public:
     Head(int type) : type(type) { }

     static const int square = 0;
     static const int round = 1;
     static const int triangular = 2;
     static const int flat = 3;

     static const int num_types = 4;

     string to_string() {
       switch(type) {
         case(square):return "square-headed";
         case(round):return "roud-headed";
         case(triangular):return "triangle-headed";
         case(flat):return "flat-headed";
         default: return "headless";
       }
     }

     int getType();

   private:
     int type;
 };
 #endif
