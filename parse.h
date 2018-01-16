//---------------------------------------------------------------------------

#ifndef parseH
#define parseH
//---------------------------------------------------------------------------




//------------------------------------------------------------------------------
#include<iostream.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
//------------------------------------------------------------------------------
enum types
{
  DELIMITER = 1, VARIABLE, NUMBER, TRIG
};

const int NUMVARS = 26;

class parser
{
  char * exp_ptr;
  char element[80];
  char tok_type;
  double vars[NUMVARS];

  void process_stage_1( double & result );
  void process_stage_2( double & result );
  void process_stage_3( double & result );
  void process_stage_4( double & result );
  void process_stage_5( double & result );
  void process_stage_6( double & result );
  void get_value( double & result );
  void get_element(); //Функция получения элемента
  void putback();
  void print_error( int error ); //Функция проверки правильности выражения
  double search_vars( char * s );
  int isdelim( char c );
public:
  parser();
  double process_stage_main( char * exp );
};






#endif
